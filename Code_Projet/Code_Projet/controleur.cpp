#include "Controleur.h"
#include "pch.h"
#include "Connexion.h"
#include "Accueil.h"
#include "Commande.h"
#include "MyForm.h"
#include "Personnel.h"
#include "statistique.h"
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
	Connexion co;
	SqlDataReader^ read;
	read = co.dataReader(query);
	if (read->HasRows)
	{
		chart->Visible = true;
		DataTable^ table = gcnew DataTable();
		table->Load(read);
		chart->DataSource = table;
		chart->Series["series1"]->XValueMember = "nom_article";
		chart->Series["series1"]->YValueMembers = "quantite";
		chart->DataBind();
	};
}

	void Controleur::afficher_chiffre_affaireMois(Chart^ chart,String^ year)
	{
		Connexion co;
		SqlDataReader^ read;
		read = co.dataReader("select month(date_payment) as mois, SUM(quantite * prix_HT) as total from Payment inner join Composer on Payment.id_commande = Composer.id_commande inner join Article on Composer.id_article=Article.id_article where year(date_payment) = " + year + " group by month(date_payment)");
		if (read->HasRows)
		{
			DataTable^ table = gcnew DataTable();
			table->Load(read);
			chart->DataSource = table;
			chart->Series->Add(year);
			chart->Series[year]->XValueMember = "mois";
			chart->Series[year]->YValueMembers = "total";
			chart->Series[year]->ChartTypeName = "spline";
			chart->DataBind();
		}
	}


	void Controleur::afficher_label_sql(Label^ label, String^ sql)
	{
		Connexion^ co;
		SqlDataReader^ read;
		read = co->dataReader(sql);

		if(read->HasRows)
		{
			while (read->Read())
			{
				String^ txt = read[0]->ToString();
				//txt->Format("{0:n}", 1234);
				label->Text = txt->Format("{0:n}", read[0]) + " €";
			}
		}
		
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

void Controleur::afficher_form(String^ of)
{
	//throw gcnew System::NotImplementedException();
	if (of == "Accueil")
	{
		CodeProjet::Accueil^ Acc = gcnew CodeProjet::Accueil();
		Acc->Show();
	}
	else if (of == "statistique")
	{
		CodeProjet::statistique^ stat = gcnew CodeProjet::statistique();
		stat->Show();
	}
	else if (of == "personnel")
	{
		CodeProjet::Personnel^ pers = gcnew CodeProjet::Personnel();
		pers->Show();
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
		String^ valeurTVA;
		String^ ValeurRemise;
		String^ ValeurMarge;
		String^ ValeurDemarque;

	if(TVACHECK->Checked == true)
	{
		valeurTVA = TVATB->Text;
	}
	else
	{
		if(TVACB->Text == "Aucun")
		{
			valeurTVA = "0";
		}
		if (TVACB->Text == "10%")
		{
			valeurTVA = "1";
		}
		if (TVACB->Text == "20%")
		{
			valeurTVA = "2";
		}
		if (TVACB->Text == "30%")
		{
			valeurTVA = "3";
		}
	}
	
	if (RemiseCHECK->Checked == true)
	{
		valeurTVA = TVATB->Text;
	}
	else
	{
		if (TVACB->Text == "Aucun")
		{
			valeurTVA = "0";
		}
		if (TVACB->Text == "10%")
		{
			valeurTVA = "1";
		}
		if (TVACB->Text == "20%")
		{
			valeurTVA = "2";
		}
		if (TVACB->Text == "30%")
		{
			valeurTVA = "3";
		}
	}
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

		
		idVille = maCNX->actionRowsID(mVille->INSERT());

		idAdresse = maCNX->actionRowsID(mAdresse->INSERT());

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
		maCNX->actionRows(mAdresse->DELETE());

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


		maCNX->actionRows(mVille->UPDATE());

		maCNX->actionRows(mAdresse->UPDATE());

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