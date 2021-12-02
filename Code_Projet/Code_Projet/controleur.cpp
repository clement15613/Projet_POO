#include "Controleur.h"
#include "pch.h"
#include "Connexion.h"
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
		Connexion co;
		SqlDataReader^ read;
		read = co.dataReader(sql);

		
		
		

			if (read->HasRows)
			{
				while (read->Read())
				{
					String^ txt = read[0]->ToString();
					label->Text = txt->Format("{0:n}", read[0]) + " �";
				}
			}
			if (label->Text == " �")
			{
				label->Text = "0 �";
			}
		
	}

	void Controleur::affichage_text_box(ComboBox^ ComboB, TextBox^ textB)
	{
		textB->Text = "valeur...";
		textB->ForeColor.Black;
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
		if (DemarqueCB->Text == "5%")
		{
			ValeurDemarque = "0.95";
		}
	}
	afficher_label_sql(lab,"select SUM(prix_HT * stock *" + valeurTVA + " * " + ValeurRemise + "*" + ValeurMarge + "*"+ValeurDemarque+") from Article");


	{

	}
	}

	void Controleur::afficher_formPersonnel(String^ nomForm)
	{
		if (nomForm == "Personnel")
		{

		};
	}



