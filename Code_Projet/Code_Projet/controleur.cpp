#include "controleur.h"
#include "pch.h"
#include "Connexion.h"
#include "Accueil.h"
#include "Article.h"
#include "Commande.h"
#include "Client.h"
#include "MyForm.h"
#include "Personnel.h"
#include "statistique.h"


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

	void Controleur::afficher_label_sql(Label^ label,String^ sql)
	{
		Connexion co;
		SqlDataReader^ read;
		read = co.dataReader(sql);
		//Label->Caption = Format(Date, "dddd dd/mm/yyyy")

		if(read->HasRows)
		{
			while (read->Read())
			{
				String^ txt = read[0]->ToString();
				//txt->Format("{0:n}", 1234);
				label->Text = txt->Format("{0:n}", read[0]) + " €";
			}
		}
	}

	void Controleur::gestion_panel(Panel^ panel1, Panel^ panel2, Panel^ panel3, Panel^ panel4, bool statut) 
	{
		if (statut == false)
		{
			panel1->Visible = false;
			panel2->Visible = false;
			panel3->Visible = false;
			panel4->Visible = false;
		}

		else if (statut == true)
		{
			panel1->Visible = true;
			panel2->Visible = false;
			panel3->Visible = false;
			panel4->Visible = false;
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
