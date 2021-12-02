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
				label->Text = txt->Format("{0:n}", read[0]) + " �";
			}
		}
		
		if (label->Text == " �")
		{
			label->Text = "0 �";
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
		if (ComboB->Text == "F�vrier")
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
		if (ComboB->Text == "Ao�t")
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
		if (ComboB->Text == "D�cembre")
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