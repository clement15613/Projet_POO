#include "Controleur.h"
#include "pch.h"
#include "Connexion.h"
#include "Accueil.h"
#include "Article.h"
#include "Commande.h"
#include "Client.h"
#include "MyForm.h"
#include "Personnel.h"
#include "statistique.h"
#include "MonCompte.h"
#include<sstream>

Controleur::Controleur()
{
	mAdresse = gcnew MapAdresse;
	mArticle = gcnew MapArticle;
	mClient = gcnew MapClient;
	mCommande = gcnew MapCommande;
	mComposer = gcnew MapComposer;
	mCorrespond = gcnew MapCorrespond;
	mFacturer = gcnew MapFacturer;
	mLivrer = gcnew MapLivrer;
	mPayment = gcnew MapPayment;
	mPersonnel = gcnew MapPersonnel;
	mVille = gcnew MapVille;
	maCNX = gcnew Connexion;
	//reader = gcnew SqlDataReader;
}

void Controleur::mdp(TextBox^ text) {
	this->state = !state;
	text->UseSystemPasswordChar = this -> state;
}

void Controleur::mdp_label(Label^ text,Label^ textpass)
{
	this->state = !state;
	if(state==true)
	{
		text->Visible = true;
		textpass->Visible = false;
	}
	else
	{
		text->Visible = false;
		textpass->Visible = true;
	}

}

void Controleur::afficher_datagridView(DataGridView^ grid)
{
	Connexion co;
	SqlDataReader^ read;
	read = co.dataReader("Select nom_article,stock,seuil_approvisionnement from Article where stock<seuil_approvisionnement");
	if (read->HasRows)
	{
		grid->Visible = true;
		DataTable^ data = gcnew DataTable();
		data->Load(read);
		data->Columns["nom_article"]->ColumnName = "Nom article";
		data->Columns["seuil_approvisionnement"]->ColumnName = "Seuil d'approvisionnement";
		grid->DataSource = data;
		grid->Columns[2]->Width = grid->Width - grid->Columns[0]->Width - grid->Columns[1]->Width-43;
	}

}


void Controleur::afficher_top(Chart^ chart, String^ query)
{
	
	reader = maCNX->dataReader(query);
	if (reader->HasRows)
	{
		chart->Visible = true;
		DataTable^ table = gcnew DataTable();
		table->Load(reader);
		chart->DataSource = table;
		chart->Series["series1"]->XValueMember = "nom_article";
		chart->Series["series1"]->YValueMembers = "quantite";
		chart->DataBind();
	};
	maCNX->connect->Close();
}

	void Controleur::afficher_chiffre_affaireMois(Chart^ chart,String^ year)
	{
		
		reader = maCNX->dataReader("select month(date_payment) as mois, SUM(quantite * prix_HT) as total from Payment inner join Composer on Payment.id_commande = Composer.id_commande inner join Article on Composer.id_article=Article.id_article where year(date_payment) = " + year + " group by month(date_payment)");
		if (reader->HasRows)
		{
			DataTable^ table = gcnew DataTable();
			table->Load(reader);
			chart->DataSource = table;
			chart->Series->Add(year);
			chart->Series[year]->XValueMember = "mois";
			chart->Series[year]->YValueMembers = "total";
			chart->Series[year]->ChartTypeName = "spline";
			chart->DataBind();
		}
		maCNX->connect->Close();
	}


	void Controleur::afficher_label_sql(Label^ label, String^ sql)
	{
		
		reader = maCNX->dataReader(sql);

		if(reader->HasRows)
		{
			while (reader->Read())
			{
				String^ txt = reader[0]->ToString();
				//txt->Format("{0:n}", 1234);
				label->Text = txt->Format("{0:n}", reader[0]) + " €";
			}
		}
		maCNX->connect->Close();
		if (label->Text == " €")
		{
			label->Text = "0 €";
		}

	}

	void Controleur::gestion_panel(Panel^ panel1, Panel^ panel2, Panel^ panel3, Panel^ panel4, bool statut) 
	{
		if (statut == false)
		{
			panel1->Visible = false;
			panel1->Enabled = false;
			panel2->Visible = false;
			panel2->Enabled = false;
			panel3->Visible = false;
			panel3->Enabled = false;
			panel4->Visible = false;
			panel4->Enabled = false;
		}

		else if (statut == true)
		{
			panel1->Visible = true;
			panel1->Enabled = true;
			panel2->Visible = false;
			panel2->Enabled = false;
			panel3->Visible = false;
			panel3->Enabled = false;
			panel4->Visible = false;
			panel4->Enabled = false;
		}
	}

void Controleur::afficher_form(String^ of, int pan)
{
	//throw gcnew System::NotImplementedException();
	if (of == "Accueil")
	{
		CodeProjet::Accueil^ Acc = gcnew CodeProjet::Accueil();
		Acc->Show();
	}

	else if (of == "client")
	{
		CodeProjet::Client^ stat = gcnew CodeProjet::Client();
		stat->Show();
		stat->setPanelAff(pan);
	}

	else if (of == "personnel")
	{
		CodeProjet::Personnel^ pers = gcnew CodeProjet::Personnel();
		pers->Show();
		pers->setPanelAff(pan);
	}

	else if (of == "article")
	{
		CodeProjet::Article^ article = gcnew CodeProjet::Article();
		article->Show();
		article->setPanelAff(pan);
	}

	else if (of == "commande")
	{
		CodeProjet::Commande^ Commande = gcnew CodeProjet::Commande();
		Commande->Show();
		Commande->setPanelAff(pan);
	}
	
	else if (of == "stats" && pan == 0)
	{
		CodeProjet::statistique^ stat = gcnew CodeProjet::statistique();
		stat->Show();
	}
	else if (of == "monCompte" && pan == 0)
	{
		CodeProjet::MonCompte^ MC = gcnew CodeProjet::MonCompte();
		MC->Show();
	}

			
	}

	void Controleur::affichage_text_box(ComboBox^ ComboB, TextBox^ textB)
	{
		
		
		if (ComboB->Enabled == true)
		{
			ComboB->Enabled = false;
		}
		else
		{
			ComboB->Enabled = true;
		}

		
		if(ComboB->Visible == true)
		{
			ComboB->Visible = false;
		}
		else
		{
			ComboB->Visible = true;
		}

/// //////////////		/// //////////////		/// //////////////
		if (textB->Enabled == true)
		{
			textB->Enabled = false;
		}
		else
		{
			textB->Enabled = true;
		}

		if (textB->Visible == true)
		{
			textB->Visible = false;
		}
		else
		{
			textB->Visible = true;
		}
	textB->ForeColor = textB->ForeColor.Gray;
		textB->Text = "valeur...";

	}

	void Controleur::btnafficher_chiffre_affaire(ComboBox^ ComboB, Button^ btn, MaskedTextBox^ textB,Label^ lab)
	{

		String^ mois;
		if (ComboB->Text == "Janvier")
		{
			mois = "1";
		}
		if (ComboB->Text == "Février")
		{
			mois = "2";
		}
		if (ComboB->Text == "Mars")
		{
			mois = "3";
		}
		if (ComboB->Text == "Avril")
		{
			mois = "4";
		}
		if (ComboB->Text == "Mai")
		{
			mois = "5";
		}
		if (ComboB->Text == "Juin")
		{
			mois = "6";
		}
		if (ComboB->Text == "Juillet")
		{
			mois = "7";
		}
		if (ComboB->Text == "Août")
		{
			mois = "8";
		}
		if (ComboB->Text == "Septembre")
		{
			mois = "9";
		}
		if (ComboB->Text == "Octobre")
		{
			mois = "10";
		}
		if (ComboB->Text == "Novembre")
		{
			mois = "11";
		}
		if (ComboB->Text == "Décembre")
		{
			mois = "12";
		}
		String^ annee = textB->Text->ToString();
	    afficher_label_sql(lab, "select SUM(quantite * prix_HT) as total from Payment inner join Composer on Payment.id_commande = Composer.id_commande inner join Article on Composer.id_article=Article.id_article where month(date_payment) = " + mois + " and year(date_payment) = " + annee);
		
	}

	void Controleur::CalculAndrecupereValeurCommercialeStock(TextBox^ TVATB, TextBox^ RemiseTB, TextBox^ MargeTB, TextBox^  DemarqueTB, ComboBox^ TVACB, ComboBox^ RemiseCB, ComboBox^ MargeCB, ComboBox^ DemarqueCB,CheckBox^ TVACHECK, CheckBox^ RemiseCHECK, CheckBox^ MARGECHECk, CheckBox^ DemarqueCHECK,Label^ lab)
	{


/// valeur TVA ///
	if(TVACHECK->Checked == true)
	{
		valeurTVA = ((Convert::ToDouble(TVATB->Text) / 100)+1).ToString()->Replace(",",".");
		
	}
	else
	{
		if(TVACB->Text == "Aucun")
		{
			valeurTVA = "1";
		}
		if (TVACB->Text == "10%")
		{
			valeurTVA = "1.1";
		}
		if (TVACB->Text == "20%")
		{
			valeurTVA = "1.2";
		}
		if (TVACB->Text == "30%")
		{
			valeurTVA = "1.3";
		}
	}
	
	/// // Remise commerciale ////////

	if (RemiseCHECK->Checked == true)
	{
		ValeurRemise = (1-(Convert::ToDouble(RemiseTB->Text) / 100)).ToString()->Replace(",", ".");
	}
	else
	{
		if (RemiseCB->Text == "Aucun")
		{
			ValeurRemise = "1";
		}
		if (RemiseCB->Text == "5%")
		{
			ValeurRemise = "0.95";
		}
		if (RemiseCB->Text == "6%")
		{
			ValeurRemise = "0.94";
		}

	}

	/// marge commerciale ///
	if (MARGECHECk->Checked == true)
	{
		ValeurMarge = ((Convert::ToDouble(MargeTB->Text) / 100) + 1).ToString()->Replace(",", ".");
	}
	else
	{
		if (MargeCB->Text == "Aucun")
		{
			ValeurMarge = "1";
		}
		if (MargeCB->Text == "5%")
		{
			ValeurMarge = "1.05";
		}
		if (MargeCB->Text == "10%")
		{
			ValeurMarge = "1.10";
		}
		if(MargeCB->Text == "15%")
		{
			ValeurMarge = "1.15";
		}

	}


	/// demarque Inconnue ///

	if(DemarqueCHECK->Checked == true)
	{
		ValeurDemarque = (1 - (Convert::ToDouble(RemiseTB->Text) / 100)).ToString()->Replace(",", ".");;
	}
	else
	{
		if (DemarqueCB->Text == "Aucun")
		{
			ValeurDemarque = "1";
		}
		if (DemarqueCB->Text == "2%")
		{
			ValeurDemarque = "0.98";
		}
		if (DemarqueCB->Text == "3%")
		{
			ValeurDemarque = "0.97";
		}
	}
	afficher_label_sql(lab, "select SUM(prix_HT * stock *" + valeurTVA + " * " + ValeurRemise + "*" + ValeurMarge + "*" + ValeurDemarque + ") from Article");


}

void Controleur::changeFore(TextBox^ box)
{
	box->Clear();
	box->ForeColor = box->ForeColor.Black;
}


	void Controleur::CnxComboBox_BDD(ComboBox^ CB1, String^ query)
	{
		CB1->Items->Clear();
		Connexion^ cnx = gcnew Connexion;
		SqlDataReader^ retour;
		retour = cnx->dataReader(query);
		String^ valeur;

		while (retour->Read())
		{
			//int coucou = sizeof(retour);
			if(retour->FieldCount>1)
			{
				valeur = retour[0]->ToString() + " " + retour[1]->ToString();
			}
			else
			{
				valeur = retour[0]->ToString();
			}
			CB1->Items->Add(valeur);
		}


	}


	void Controleur::ajouterPersonnel(TextBox^ nom, TextBox^ prenom, DateTimePicker^ dateEmbauche, TextBox^ user, 
									  TextBox^ MDP, TextBox^ numRue, TextBox^ nomRue, TextBox^ complement, ComboBox^ ville, TextBox^ superieur)
	{
		int idVille;
		int idAdresse;
		int idSuperieur;

		mPersonnel->setNom(nom->Text);
		mPersonnel->setPrenom(prenom->Text);
		mPersonnel->setDateEmbauche(dateEmbauche->Value);
		mPersonnel->setNomUtilisateur(user->Text);
		mPersonnel->setMotDePasse(MDP->Text);
		mPersonnel->setid_superieur(1);

		mAdresse->setnumero(Convert::ToInt32(numRue->Text));
		mAdresse->setrue(nomRue->Text);
		mAdresse->setcomplement(complement->Text);

		mVille->setVille(ville->Text);
		mVille->setCodePostal("00000");

		
		idVille = maCNX->actionRowsID(mVille->INSERT_client());

		idAdresse = maCNX->actionRowsID(mAdresse->INSERT_client());

		mCorrespond->setIdVille(idVille);
		mCorrespond->SetIdAdresse(idAdresse);

		mPersonnel->setid_adresse(idAdresse);

		maCNX->actionRows(mCorrespond->INSERT());
		maCNX->actionRows(mPersonnel->INSERT());
	}

	void Controleur::supprimerPersonnel(ComboBox^ nomPrenom)
	{
		int idAdresse;
		maCNX->connect->Close();
		String^ result = nomPrenom->Text;
		array<String^>^ stringarray = result->Split(' ');
		
		mPersonnel->setNom(stringarray[0]);
		mPersonnel->setPrenom(stringarray[1]);

		idAdresse = maCNX->actionRowsID("select id_adresse from personnel where nom_personnel = '" + mPersonnel->getNom() + "' and prenom_personnel = '" + mPersonnel->getPrenom() + "'");

		maCNX->actionRows(mPersonnel->DELETE());

		mCorrespond->SetIdAdresse(idAdresse);
		maCNX->actionRows(mCorrespond->DELETE());

		mAdresse->setid_adresse(idAdresse);
		maCNX->actionRows(mAdresse->DELETE_client());

	}

	void Controleur::getIdPersonnelModifier(ComboBox^ monCB)
	{
		int id;
		String^ result = monCB->Text;
		array<String^>^ stringarray = result->Split(' ');
		id = maCNX->actionRowsID("select id_personnel from personnel where nom_personnel = '" + stringarray[0] + "' and prenom_personnel = '" + stringarray[1] + "'");
		mPersonnel->setid_personnel(id);
	}

	void Controleur::afficherModifierPersonnel(ComboBox^ cbNomPrenom, TextBox^ nom, TextBox^ prenom, DateTimePicker^ dateEmbauche, TextBox^ user,
		TextBox^ MDP, TextBox^ numRue, TextBox^ nomRue, TextBox^ complement, ComboBox^ ville, TextBox^ superieur)
	{
		DateTime^ valeur;
		String^ nomPrenom = "";
		String^ oui;

		this->getIdPersonnelModifier(cbNomPrenom);
		reader = maCNX->dataReader("select * from personnel where id_personnel = " + mPersonnel->getid_personnel());
		while (reader->Read())
		{
			mPersonnel->setNom(reader[1]->ToString());
			mPersonnel->setPrenom(reader[2]->ToString());
			mPersonnel->setDateEmbauche(Convert::ToDateTime(reader[3]));
			mPersonnel->setNomUtilisateur(reader[4]->ToString());
			mPersonnel->setMotDePasse(reader[5]->ToString());
			mPersonnel->setid_adresse(Convert::ToInt32(reader[6]));
			mPersonnel->setid_superieur(Convert::ToInt32(reader[7]));
		}
		maCNX->connect->Close();

		reader = maCNX->dataReader("select * from adresse where id_adresse = " + mPersonnel->getid_adresse());
		while (reader->Read())
		{
			mAdresse->setnumero(Convert::ToInt32(reader[1]));
			mAdresse->setrue(reader[2]->ToString());
			mAdresse->setcomplement(reader[3]->ToString());
		}

		maCNX->connect->Close();
		reader = maCNX->dataReader("select * from correspond where id_adresse = " + mPersonnel->getid_adresse());
		while (reader->Read())
		{
			mVille->setIdVille(Convert::ToInt32(reader[0]));
		}

		maCNX->connect->Close();
		reader = maCNX->dataReader("select * from ville where id_ville = " + mVille->getIdVille());
		while (reader->Read())
		{
			mVille->setVille(reader[1]->ToString());
			mVille->setCodePostal(reader[2]->ToString());
		}


		nom->Text = mPersonnel->getNom();
		prenom->Text = mPersonnel->getPrenom();
		dateEmbauche->Text = mPersonnel->getDateEmbauche()->ToString();
		user->Text = mPersonnel->getNomUtilisateur();
		MDP->Text = mPersonnel->getMotDePasse();
		numRue->Text = mAdresse->getnumero().ToString();
		nomRue->Text = mAdresse->getrue();
		complement->Text = mAdresse->getcomplement();
		ville->Text = mVille->getVille();

		maCNX->connect->Close();
		reader = maCNX->dataReader("select nom_personnel,prenom_personnel from personnel where id_personnel =" + mPersonnel->getid_superieur());
		while (reader->Read())
		{
			nomPrenom += reader[0] + " ";
			nomPrenom += reader[1];
		}
		maCNX->connect->Close();
		
		superieur->Text = nomPrenom;
	}

	void Controleur::afficher_label_moncompte(Label^ nom, Label^ prenom, Label^ nomUtilisateur, Label^ mdp, Label^ numeordevoie, Label^ complement, Label^ nomdevoie, Label^ ville)
	{
		Connexion maCNX;
		SqlDataReader^ reader;
		reader = maCNX.dataReader("select nom_Personnel, prenom_Personnel, nom_utilisateur_Personnel, mdp_Personnel, numero, complement, rue from Personnel inner join Adresse on Personnel.id_adresse = Adresse.id_adresse where id_Personnel = 1");
		while (reader->Read())
		{
			nom->Text = reader[0]->ToString();
			prenom->Text = reader[1]->ToString();
			nomUtilisateur->Text = reader[2]->ToString();
			mdp->Text = reader[3]->ToString();
			numeordevoie->Text = reader[4]->ToString();
			complement->Text = reader[5]->ToString();
			nomdevoie->Text = reader[6]->ToString();
		}
		maCNX.connect->Close();
		
		reader = maCNX.dataReader("select ville from ville where id_ville = 1");
		while (reader->Read())
		{
			ville->Text = reader[0]->ToString();
		}
	}

	void Controleur::UpdateMonCompte(Label^ nom, Label^ prenom, Label^ nomUtilisateur, Label^ mdp, Label^ numeordevoie, Label^ complement, Label^ nomdevoie, Label^ ville, TextBox^ nomBox, TextBox^ prenomBox, TextBox^ nomutilibox, TextBox^ mdpbox, TextBox^ numeroVoiebox, TextBox^ complementbox, TextBox^ nomdevoiebox, TextBox^ villebox)
	{
		mPersonnel->setNom(nom->Text);
		mPersonnel->setPrenom(prenom->Text);
		mPersonnel->setNomUtilisateur(nomUtilisateur->Text);
		mPersonnel->getid_personnel();
		//maCNX->actionRows("Update Personnel set nom_Personnel = " + "'" + nomBox->Text + "' where id_personnel =");
		//maCNX->actionRows("Update Personnel set prenom_personnel = " + "'" + prenomBox->Text + "' where id_personnel = 1");
		//maCNX.actionRows("Update Personnel set nom_utilisateur_Personnel = " + "'" + nomutilibox->Text + "' where id_personnel = 1");
		//maCNX.actionRows("Update Personnel set mdp_Personnel = " + "'" + mdpbox->Text + "' where id_personnel = 1");
		//maCNX.actionRows("Update Adresse set numero = " + "'" + numeroVoiebox->Text + "' where id_adresse = 1");
	}





	void Controleur::modifierPersonnel(TextBox^ nom, TextBox^ prenom, DateTimePicker^ dateEmbauche, TextBox^ user, TextBox^ MDP, 
		TextBox^ numRue, TextBox^ nomRue, TextBox^ complement, ComboBox^ ville, TextBox^ superieur)
	{
		int idVille;
		int idAdresse;
		int idSuperieur;
		maCNX->connect->Close();
		mPersonnel->setNom(nom->Text);
		mPersonnel->setPrenom(prenom->Text);
		mPersonnel->setDateEmbauche(dateEmbauche->Value);
		mPersonnel->setNomUtilisateur(user->Text);
		mPersonnel->setMotDePasse(MDP->Text);
		mPersonnel->setid_superieur(1);

		mAdresse->setid_adresse(mPersonnel->getid_adresse());
		mAdresse->setnumero(Convert::ToInt32(numRue->Text));
		mAdresse->setrue(nomRue->Text);
		mAdresse->setcomplement(complement->Text);

		mVille->setVille(ville->Text);
		mVille->setCodePostal("00000");


		maCNX->actionRows(mVille->UPDATE_client());

		maCNX->actionRows(mAdresse->UPDATE_client());

		/*mCorrespond->setIdVille(idVille);
		mCorrespond->SetIdAdresse(idAdresse);

		mPersonnel->setid_adresse(idAdresse);*/

		maCNX->actionRows(mCorrespond->UPDATE());
		maCNX->actionRows(mPersonnel->UPDATE());
	}

	void Controleur::afficherPersonnel(DataGridView^ myGrid, ComboBox^ cb1, ComboBox^ cb2, ComboBox^ cb3, ComboBox^ cb4, DateTimePicker^ date)
	{
		String^ result = cb3->Text;
		array<String^>^ stringarray = result->Split(' ');
		maCNX->connect->Close();
		reader = maCNX->dataReader("select personnel1.nom_Personnel as nom ,personnel1.prenom_Personnel as prenom ,personnel1.date_embauche_Personnel as 'date embauche', numero, rue, complement, ville, Personnel.nom_Personnel as nom_sup, personnel.prenom_personnel as prenom_sup from Personnel as personnel1  inner join Personnel as personnel on personnel1.id_Personnel_Superieur = Personnel.id_Personnel inner join ( select ville.ville, ville.id_ville, Correspond.id_adresse as idAdresse, Correspond.id_ville as idVille, Adresse.id_adresse, numero, rue, complement from Adresse inner join Correspond on correspond.id_adresse = Adresse.id_adresse inner join ville on Ville.id_ville = Correspond.id_ville) as adresseComplete on personnel1.id_adresse = adresseComplete.id_adresse where personnel1.nom_Personnel = '" + cb1->Text + "' or personnel1.prenom_Personnel = '" + cb2->Text + "' or personnel.nom_Personnel = '" + stringarray[0] + "' or ville = '" + cb4->Text + "' or personnel1.date_embauche_Personnel > '" + date->Value + "'");
		if (reader->HasRows)
		{
			DataTable^ madata = gcnew DataTable();
			madata->Load(reader);
			madata->Columns["nom_sup"]->ColumnName = "Nom superieur";
			madata->Columns["prenom_sup"]->ColumnName = "Prenom superieur";
			myGrid->DataSource = madata;
			maCNX->connect->Close();
		}
	}

	void Controleur::gridArticleAjouterCmd(DataGridView^ myGrid,String^ query)
	{
		maCNX->connect->Close();
		reader = maCNX->dataReader(query);
		if (reader->HasRows)
		{
			DataTable^ madata = gcnew DataTable();
			madata->Load(reader);
			myGrid->DataSource = madata;
			maCNX->connect->Close();
		}
	}


	void Controleur::ajouterCommande(DateTimePicker^ dateCommande, DateTimePicker^ dateEnvoi, DateTimePicker^ dateLivraison, DateTimePicker^ datePaiement, ComboBox^ nomClient, ComboBox^ moyenPaiement,TextBox^ tb, bool state)
	{
		int idCMD;
		int idPayment;
		int idClient;
		String^ str;
		String^ result = nomClient->Text;
		array<String^>^ stringarray = result->Split(' ');

		if (state == false)
		{
			idCMD = maCNX->actionRowsID(mCommande->INSERTX());
			mPayment->setIdcommande(idCMD);
			idPayment = maCNX->actionRowsID(mPayment->INSERTX());
			mCommande->setIdcommande(idCMD);
			mPayment->setIdpayment(idPayment);
			
		}

		if (state == true)
		{
			idClient = maCNX->actionRowsID("select id_client from client where nom_client = '" + stringarray[0] + "'");
			mCommande->setDateCommande(dateCommande->Value);
			mCommande->setDateEmission(dateEnvoi->Value);
			mCommande->setDateLivraison(dateLivraison->Value);
			mCommande->setIdclient(idClient);

			mPayment->setDatePayment(datePaiement->Value);
			mPayment->setMoyenPayment(moyenPaiement->Text);

			maCNX->actionRows(mCommande->INSERT());
			maCNX->actionRows(mPayment->INSERT());

			//reference
			str += stringarray[1]->Substring(0, 3);
			str += stringarray[0]->Substring(0, 3);
			str += dateCommande->Value.Year.ToString();
			maCNX->connect->Close();
			reader = maCNX->dataReader("select left(Vville,3) from (select Vville,client from (select Client.id_client as client,Livrer.id_client as Lclient,Livrer.id_adresse as Ladresse,Adresse.id_adresse as Aadresse,Correspond.id_adresse as Cadresse,Correspond.id_ville as Cville,Ville.ville as Vville from Client inner join Livrer on Livrer.id_client = Client.id_client inner join Adresse on Livrer.id_adresse = Adresse.id_adresse inner join Correspond on Correspond.id_adresse = Adresse.id_adresse inner  join Ville on ville.id_ville = Correspond.id_ville) as coucou where client = " + idClient + ") as coucou2");
			while (reader->Read())
			{
				str += reader[0]->ToString();
			}
			maCNX->connect->Close();
			str += num.ToString();
			tb->Text = str;
			num = num + 1;
			maCNX->actionRows("update commande set ref = '" + str + "' where id_commande = " + mCommande->getIdcommande());
		}
	}

	void Controleur::afficherPersonnel(DataGridView^ myGrid)
	{
		reader = maCNX->dataReader("select * from personnel");
		if (reader->HasRows)
		{
			DataTable^ madata = gcnew DataTable();
			madata->Load(reader);
			madata->Columns["nom_Personnel"]->ColumnName = "Nom";
			myGrid->DataSource = madata;
		}
	}

	void Controleur::ajouterArticle(TextBox^ nom, TextBox^ prix_ht, TextBox^ nature, TextBox^ tva, TextBox^ couleur, TextBox^ seuil, TextBox^ quantite)
	{
	

		mArticle->setNom(nom->Text);
		mArticle->setPrixHT(Convert::ToDouble(prix_ht->Text));
		mArticle->setCouleur(couleur->Text);
		mArticle->setNature(nature->Text);
		mArticle->setTauxTVA(Convert::ToDouble(tva->Text));
		mArticle->setSeuilReapprovisionnement(Convert::ToInt32(seuil->Text)); 
		mArticle->setStock(Convert::ToInt32(quantite->Text));
		maCNX->actionRows(mArticle->INSERT());
		MessageBox::Show("Confirmé");

	}

	void Controleur::AfficherArticle(ComboBox^ nom, ComboBox^ nature, ComboBox^ couleur,DataGridView^ datagrid,NumericUpDown^ numeric)
	{
	
				reader = maCNX->dataReader("select nom_article,nature,prix_HT,stock,seuil_approvisionnement,couleur from Article where nom_article = '" + nom->Text + "' or nature = '" + nature->Text + "' or couleur = '" + couleur->Text + "' or stock = '" + numeric->Text + "'");
				if (reader->HasRows)
				{
					DataTable^ madata = gcnew DataTable();
					madata->Load(reader);
					madata->Columns["nom_article"]->ColumnName = "Nom article";
					madata->Columns["nature"]->ColumnName = "Nature";
					madata->Columns["prix_HT"]->ColumnName = "Prix hors taxe";
					madata->Columns["stock"]->ColumnName = "Stock";
					madata->Columns["seuil_approvisionnement"]->ColumnName = "Seuil approvisionnement";
					madata->Columns["Couleur"]->ColumnName = "Couleur";
					datagrid->DataSource = madata;
					maCNX->connect->Close();
					
				}

		
		//reader = maCNX->dataReader()
	}

	void Controleur::afficher_datagridView_commande(DataGridView^ grid)
	{
		Connexion co;
		SqlDataReader^ read;
		read = co.dataReader("Select nom_article, nature, prix_HT, taux_TVA, stock, seuil_approvisionnement from Article where stock < seuil_approvisionnement");
		if (read->HasRows)
		{
			grid->Visible = true;
			DataTable^ data = gcnew DataTable();
			data->Load(read);
			data->Columns["nom_article"]->ColumnName = "Nom article";
			data->Columns["seuil_approvisionnement"]->ColumnName = "Seuil d'approvisionnement";
			grid->DataSource = data;
			grid->Columns[5]->Width = grid->Width - grid->Columns[0]->Width - grid->Columns[1]->Width - grid->Columns[2]->Width - grid->Columns[3]->Width - grid->Columns[4]->Width - grid->Columns[5]->Width + 55;

		}
	}

	void Controleur::modifierArticle(TextBox^ nom, TextBox^ nature, TextBox^ couleur, TextBox^ prix, TextBox^ tva, TextBox^ seuil, TextBox^ stock, ComboBox^ box)
	{
		maCNX->connect->Close();
		mArticle->setNom(nom->Text);
		mArticle->setNature(nature->Text);
		mArticle->setCouleur(couleur->Text);
		mArticle->setTauxTVA(Convert::ToDouble(tva->Text));
		mArticle->setPrixHT(Convert::ToDouble(prix->Text));
		mArticle->setStock(Convert::ToInt32(stock->Text));
		mArticle->setSeuilReapprovisionnement(Convert::ToInt32(seuil->Text));
		maCNX->actionRows(mArticle->UPDATE()+ " where nom_article = '" + box->Text + "'");




	}

	void Controleur::afficherModifierArticle(TextBox^ nom, TextBox^ nature, TextBox^ couleur, TextBox^ prix, TextBox^ tva, TextBox^ seuil, TextBox^ quantite,ComboBox^ combo)
	{
		/*mArticle->setNom(nom->Text);
		mArticle->setNature(nature->Text);
		mArticle->setCouleur(couleur->Text);
		mArticle->setPrixHT(Convert::ToDouble(prix->Text));
		mArticle->setTauxTVA(Convert::ToDouble(tva->Text));
		mArticle->setSeuilReapprovisionnement(Convert::ToInt32(seuil->Text));
		mArticle->setStock(Convert::ToInt32(quantite->Text));*/

		maCNX->connect->Close();

		reader = maCNX->dataReader("select nom_article,nature,couleur,prix_HT,taux_TVA,seuil_approvisionnement,stock from Article where nom_article = '" + combo->Text + "'");

		while(reader->Read())
		{
			nom->Text = reader[0]->ToString();
			nature->Text = reader[1]->ToString();
			couleur->Text = reader[2]->ToString();
			prix->Text = reader[3]->ToString();
			tva->Text = reader[4]->ToString();
			seuil->Text = reader[5]->ToString();
			quantite->Text = reader[6]->ToString();
		}


	}

	void Controleur::supprimerArticle(ComboBox^ box)
	{
		String^ sql;
		reader = maCNX->dataReader("select id_article,nom_article from article where nom_article = '" + box->Text + "'");
		while(reader->Read()) 
		{
			sql = "delete from Composer where id_article = " + reader[0]->ToString();
		}
		maCNX->connect->Close();
		maCNX->actionRows(sql);
		maCNX->connect->Close();
		maCNX->actionRows(mArticle->DELETE() + "'"+box->Text+"'");
	}

	void Controleur::ajouterClient(TextBox^ nom, TextBox^ prenom, TextBox^ numerovoie, TextBox^ nomdevoie, TextBox^ complement, ComboBox^ ville, DateTimePicker^ naissance, DateTimePicker^ premierachat)
	{	
		int idVille;
		int idAdresse;
		int idClient;

		mClient->setNom(nom->Text);
		mClient->setPrenom(prenom->Text);
		mClient->setDatenaissance(naissance->Value);
		mClient->setDatefirstachat(premierachat->Value);
		idClient = maCNX->actionRowsID(mClient->INSERT());


		mAdresse->setcomplement(complement->Text);
		mAdresse->setnumero(Convert::ToInt32(numerovoie->Text));
		mAdresse->setrue(nomdevoie->Text);

		mVille->setVille(ville->Text);
		mVille->setCodePostal("00000");

		idAdresse = maCNX->actionRowsID(mAdresse->INSERT_client());
		idVille = maCNX->actionRowsID("select id_ville from ville where ville = '" + mVille->getVille()+"'");
		maCNX->actionRows("insert into Correspond values(" + idVille + "," + idAdresse+")");

		maCNX->actionRows("insert into Facturer values(" + idClient + "," + idAdresse + ")");
		maCNX->actionRows("insert into Livrer values(" + idClient + "," + idAdresse + ")");

		mLivrer->setIdadresse(idAdresse);
		mLivrer->setIdclient(idClient);
		//maCNX->actionRows(mLivrer->INSERT());
		
		
		


		
	}

	void Controleur::afficherClient(ComboBox^ nom, ComboBox^ prenom, ComboBox^ ville, DateTimePicker^ naissance, DateTimePicker^ firstachat, DataGridView^ datagrid)
	{
		String^ sql;
		maCNX->connect->Close();
		reader = maCNX->dataReader("select Cnom,Cprenom,Acomplement,Arue,Anumero,Vville,naissance,achat from (select Client.nom_client as Cnom,Client.date_naissance as naissance,Client.date_first_achat as achat, Client.prenom as Cprenom,Adresse.complement as Acomplement,Adresse.rue as Arue,Adresse.numero as Anumero,Ville.ville as Vville,Livrer.id_client as Lclient,Livrer.id_adresse as Ladresse,Adresse.id_adresse as Aadresse,Correspond.id_adresse as Cadresse,Correspond.id_ville as Cville from Client inner join Livrer on Livrer.id_client = Client.id_client inner join Adresse on Livrer.id_adresse = Adresse.id_adresse inner join Correspond on Correspond.id_adresse = Adresse.id_adresse inner  join Ville on ville.id_ville = Correspond.id_ville) as coucou where Cnom = '" + nom->Text + "' or Cprenom ='" + prenom->Text + "' or Vville = '" + ville->Text + "' or naissance = '" + naissance->Value + "' or achat = '" + firstachat->Value+"'");
		if (reader->HasRows)
		{
			DataTable^ madata = gcnew DataTable();
			madata->Load(reader);
			/*madata->Columns["nom_client"]->ColumnName = "Nom client";
			madata->Columns["prenom"]->ColumnName = "Prénom";
			madata->Columns["numero"]->ColumnName = "Numéro de rue";
			madata->Columns["rue"]->ColumnName = "Rue";
			madata->Columns["complement"]->ColumnName = "Complement";
			madata->Columns["date_naissance"]->ColumnName = "Date de naissance";
			madata->Columns["date_first_achat"]->ColumnName = "Date premier achat";*/
			datagrid->DataSource = madata;
			maCNX->connect->Close();
		}
		
	}

	void Controleur::afficherModifierClient(TextBox^ nom , TextBox^ prenom, TextBox^ numerovoie, TextBox^ complement, TextBox^ nomdevoie, ComboBox^ ville , ComboBox^ liste, DateTimePicker^ naissance, DateTimePicker^ achat)
	{
		
		String^ result = liste->Text;
		array<String^>^ stringarray = result->Split(' ');

		this->getIdClientModifier(liste);
		reader = maCNX->dataReader("select Cnom,Cprenom,Acomplement,Arue,Anumero,Vville,naissance,achat from (select Client.nom_client as Cnom,Client.date_naissance as naissance,Client.date_first_achat as achat, Client.prenom as Cprenom,Adresse.complement as Acomplement,Adresse.rue as Arue,Adresse.numero as Anumero,Ville.ville as Vville,Livrer.id_client as Lclient,Livrer.id_adresse as Ladresse,Adresse.id_adresse as Aadresse,Correspond.id_adresse as Cadresse,Correspond.id_ville as Cville from Client inner join Livrer on Livrer.id_client = Client.id_client inner join Adresse on Livrer.id_adresse = Adresse.id_adresse inner join Correspond on Correspond.id_adresse = Adresse.id_adresse inner  join Ville on ville.id_ville = Correspond.id_ville) as coucou where  Cnom ='" + stringarray[0] + "' and Cprenom = '" + stringarray[1] + "'");
		while (reader->Read())
		{
			nom->Text = reader[0]->ToString();
			prenom->Text = reader[1]->ToString();
			complement->Text = reader[2]->ToString();
			nomdevoie->Text = reader[3]->ToString();
			numerovoie->Text = reader[4]->ToString();
			ville->Text = reader[5]->ToString();
			naissance->Text = reader[6]->ToString();
			achat->Text = reader[7]->ToString();
			
		}
	

	}


	void Controleur::getIdClientModifier(ComboBox^ monCB)
	{
		int id;
		String^ result = monCB->Text;
		array<String^>^ stringarray = result->Split(' ');
		id = maCNX->actionRowsID("select id_client from client where nom_client = '" + stringarray[0] + "' and prenom = '" + stringarray[1] + "'");
		mClient->setIdclient(id);
	}

	void Controleur::UpdateModifierClient(ComboBox^ liste ,TextBox^ nom, TextBox^ prenom, TextBox^ numerovoie, TextBox^complement , TextBox^nomdevoie , ComboBox^ ville, DateTimePicker^ naissance, DateTimePicker^ achat)
	{
		int idadresse;
		int idville;
		String^ result = liste->Text;
		array<String^>^ stringarray = result->Split(' ');
		maCNX->connect->Close();

		mClient->setNom(nom->Text);
		mClient->setPrenom(prenom->Text);
		mClient->setDatenaissance(naissance->Value);
		mClient->setDatefirstachat(achat->Value);

		maCNX->actionRows(mClient->UPDATE() + "where nom_client ='" + stringarray[0] + "' and prenom = '" + stringarray[1] + "'");

		maCNX->connect->Close();

		mAdresse->setcomplement(complement->Text);
		mAdresse->setnumero(Convert::ToInt32(numerovoie->Text));
		mAdresse->setrue(nomdevoie->Text);
		
		idadresse = maCNX->actionRowsID("select id_adresse from Livrer where id_client = " + mClient->getIdclient());
		mAdresse->setid_adresse(idadresse);

		maCNX->actionRows(mAdresse->UPDATE_client());
		

		mVille->setVille(ville->Text);
		idville = maCNX->actionRowsID("select id_ville from Correspond where id_adresse = " + idadresse);
		mVille->setIdVille(idville);

		maCNX->actionRows(mVille->UPDATE_client());
		

	}


			
	void Controleur::ajouterArticleCommande(DataGridView^ mygrid, NumericUpDown^ qte)
	{
		int idArticle;
		int stock;
		String^ valeur;
		valeur = mygrid->SelectedCells[0]->Value->ToString();
		mComposer->setQuantite(Convert::ToInt32(qte->Text));
		maCNX->connect->Close();
		idArticle = maCNX->actionRowsID("select id_article from article where nom_article = '" + valeur->ToString() + "'");
		mComposer->setIdarticle(idArticle);
		mComposer->setIdcommande(mCommande->getIdcommande());
		maCNX->actionRows(mComposer->INSERT());
		//suppression du stock des articles ajoutés
		stock = maCNX->actionRowsID("select stock from article where id_article = " + idArticle);
		stock = stock - Convert::ToInt32(qte->Text);
		maCNX->actionRows("update article set stock = " + stock + " where id_article = " + idArticle);
	}

	void Controleur::afficherCommande(DataGridView^ mygrid, ComboBox^ cbRef, ComboBox^ cbNature, ComboBox^ moyenPayment, DateTimePicker^ dateCommande, NumericUpDown^ nbrArticle)
	{
		maCNX->connect->Close();
		reader = maCNX->dataReader("select commande.id_commande,ref,date_commande,date_emission,date_livraison,date_Payment,moyen_payment,nom_article,nature,quantite from commande inner join Payment on Commande.id_commande = Payment.id_commande inner join Composer on commande.id_commande = Composer.id_commande inner join article on Article.id_article = Composer.id_article where date_commande >'" + dateCommande->Value + "'or ref ='" + cbRef->Text + "' or nature = '" + cbNature->Text + "' or quantite =" + nbrArticle->Text + " or moyen_payment = '" + moyenPayment->Text + "' order by id_commande");
		if (reader->HasRows)
		{
			DataTable^ madata = gcnew DataTable();
			madata->Load(reader);
			mygrid->DataSource = madata;
			maCNX->connect->Close();
		}
	}


	void Controleur::supprimerCommande(ComboBox^ cbref)
	{
		int idCommande;
		maCNX->connect->Close();
		idCommande = maCNX->actionRowsID("select id_commande from commande where ref = '" + cbref->Text + "'");

		mCommande->setIdcommande(idCommande);
		mPayment->setIdcommande(idCommande);
		mComposer->setIdcommande(idCommande);

		maCNX->actionRows(mComposer->DELETE());
		maCNX->actionRows(mPayment->DELETE());
		maCNX->actionRows(mCommande->DELETE());
	}


	void Controleur::afficherModifierCommande(ComboBox^ refE, ComboBox^ recherche, ComboBox^ nomClient, ComboBox^ moyenPayment, TextBox^ refS, DateTimePicker^ dateCommande, DateTimePicker^ dateEnvoi, DateTimePicker^ dateLivraison, DateTimePicker^ datePayment, NumericUpDown^ qte, DataGridView^ myGrid)
	{
		int idCommande;
		String^ nomPrenom;
		maCNX->connect->Close();
		idCommande = maCNX->actionRowsID("select id_commande from commande where ref = '" + refE->Text + "'");
		mCommande->setIdcommande(idCommande);


		maCNX->connect->Close();
		reader = maCNX->dataReader("select * from commande where id_commande = " + mCommande->getIdcommande());
		while (reader->Read())
		{
			mCommande->setReference(reader[1]->ToString());
			mCommande->setDateLivraison(Convert::ToDateTime(reader[2]));
			mCommande->setDateEmission(Convert::ToDateTime(reader[3]));
			mCommande->setDateCommande(Convert::ToDateTime(reader[4]));
			mCommande->setIdclient(Convert::ToInt32(reader[5]));
		}
		maCNX->connect->Close();

		reader = maCNX->dataReader("select * from payment where id_commande = " + mCommande->getIdcommande());
		while (reader->Read())
		{
			mPayment->setIdpayment(Convert::ToInt32(reader[0]));
			mPayment->setDatePayment(Convert::ToDateTime(reader[1]));
			mPayment->setMoyenPayment(reader[2]->ToString());
			mPayment->setIdcommande(Convert::ToInt32(reader[3]));
		}

		maCNX->connect->Close();

		reader = maCNX->dataReader("select * from composer where id_commande = " + mCommande->getIdcommande());
		while (reader->Read())
		{
			mComposer->setIdcommande(Convert::ToInt32(reader[0]));
			mComposer->setIdarticle(Convert::ToInt32(reader[1]));
			mComposer->setQuantite(Convert::ToInt32(reader[2]));
		}
		maCNX->connect->Close();

		moyenPayment->Text = mPayment->getMoyenPayment();
		refS->Text = mCommande->getReference();
		dateCommande->Text = mCommande->getDateCommande()->ToString();
		dateEnvoi->Text = mCommande->getDateEmission()->ToString();
		dateLivraison->Text = mCommande->getDateLivraison()->ToString();
		datePayment->Text = mPayment->getDatePayment()->ToString();
		

		reader = maCNX->dataReader("select nom_client,prenom from client where id_client =" + mCommande->getIdclient());
		while (reader->Read())
		{
			nomPrenom += reader[0] + " ";
			nomPrenom += reader[1];
		}
		maCNX->connect->Close();


		nomClient->Text = nomPrenom;


		gridArticleAjouterCmd(myGrid, "select nom_article,nature,couleur,prix_HT from article inner join Composer on article.id_article=Composer.id_article inner join commande on commande.id_commande=Composer.id_commande where commande.id_commande =" + mCommande->getIdcommande());
	}

	void Controleur::supprimerArticleCommande(DataGridView^ mygrid)
	{
		int idArticle;
		int stock;

		String^ valeur;
		valeur = mygrid->SelectedCells[0]->Value->ToString();

		idArticle = maCNX->actionRowsID("select id_article from article where nom_article = '" + valeur->ToString() + "'");

		maCNX->actionRows("delete from composer where id_article = " + idArticle + "and id_commande = " + mCommande->getIdcommande());
		
		
	}

	void Controleur::racourci(DataGridView^ myGrid)
	{
		gridArticleAjouterCmd(myGrid, "select nom_article,nature,couleur,prix_HT from article inner join Composer on article.id_article=Composer.id_article inner join commande on commande.id_commande=Composer.id_commande where commande.id_commande =" + mCommande->getIdcommande());
	}


	void Controleur::afficherArticle(DataGridView^ myGrid, ComboBox^ cb1)
	{
		maCNX->connect->Close();
		if (cb1->Text != "")
		{
			reader = maCNX->dataReader("select nom_article,nature,couleur,prix_HT,stock from article where nom_article = '" + cb1->Text + "'");
			if (reader->HasRows)
			{
				DataTable^ madata = gcnew DataTable();
				madata->Load(reader);
				myGrid->DataSource = madata;
				maCNX->connect->Close();
			}
		}
		else
		{
			reader = maCNX->dataReader("select nom_article,nature,couleur,prix_HT,stock from article");
			if (reader->HasRows)
			{
				DataTable^ madata = gcnew DataTable();
				madata->Load(reader);
				myGrid->DataSource = madata;

			}

		}
	}


	void Controleur::modifierCommande(DateTimePicker^ datecommande, DateTimePicker^ dateenvoi, DateTimePicker^ datelivraison, DateTimePicker^ datepayment, ComboBox^ nomclient, ComboBox^ moyenpayment)
	{
		int idClient;
		mCommande->setDateCommande(datecommande->Value);
		mCommande->setDateEmission(dateenvoi->Value);
		mCommande->setDateLivraison(datelivraison->Value);

		String^ result = nomclient->Text;
		array<String^>^ stringarray = result->Split(' ');
		maCNX->connect->Close();
		idClient = maCNX->actionRowsID("select id_client from client where nom_client = '" + stringarray[0] + "'");
		mCommande->setIdclient(idClient);

		mPayment->setDatePayment(datepayment->Value);
		mPayment->setMoyenPayment(moyenpayment->Text);

		maCNX->actionRows(mPayment->INSERT());
		maCNX->actionRows(mCommande->INSERT());
		

	}

	void Controleur::supprimerClient(ComboBox^ cbNomPrenom)
	{
		int idClient;
		String^ result = cbNomPrenom->Text;
		array<String^>^ stringarray = result->Split(' ');
		maCNX->connect->Close();
		idClient = maCNX->actionRowsID("select id_client from client where nom_client = '" + stringarray[0] + "'");
		supprimerCommandeClient(idClient);

		mClient->setIdclient(idClient);
		mFacturer->setIdclient(idClient);
		mLivrer->setIdclient(idClient);

		maCNX->actionRows(mLivrer->DELETE());
		maCNX->actionRows(mFacturer->DELETE());
		maCNX->actionRows(mClient->DELETE());
	}

	void Controleur::supprimerCommandeClient(int id)
	{
		int idCommande;
		maCNX->connect->Close();
		idCommande = maCNX->actionRowsID("select id_commande from commande where id_client = " + id);

		mCommande->setIdcommande(idCommande);
		mPayment->setIdcommande(idCommande);
		mComposer->setIdcommande(idCommande);

		maCNX->actionRows(mComposer->DELETE());
		maCNX->actionRows(mPayment->DELETE());
		maCNX->actionRows(mCommande->DELETE());
	}

	void Controleur::chargementdata(DataGridView^ myGrid, String^ query)
	{
		maCNX->connect->Close();
			reader = maCNX->dataReader(query);
			if (reader->HasRows)
			{
				DataTable^ madata = gcnew DataTable();
				madata->Load(reader);
				myGrid->DataSource = madata;
			}		
	}