#include "controleur.h"
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


		maCNX->actionRows(mVille->UPDATE());

		maCNX->actionRows(mAdresse->UPDATE());

		/*mCorrespond->setIdVille(idVille);
		mCorrespond->SetIdAdresse(idAdresse);

		mPersonnel->setid_adresse(idAdresse);*/

		maCNX->actionRows(mCorrespond->UPDATE());
		maCNX->actionRows(mPersonnel->UPDATE());
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


			
