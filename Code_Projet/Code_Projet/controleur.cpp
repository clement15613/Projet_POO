#include "controleur.h"
#include "pch.h"
#include "Connexion.h"
#include "Accueil.h"
#include "Commande.h"
#include "MyForm.h"
#include "Personnel.h"
#include "statistique.h"
#include<sstream>


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
