#include "controleur.h"
#include "pch.h"
#include "Connexion.h"
#include "Accueil.h"
#include "Commande.h"
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
	if(read->HasRows)
	{
		chart->Visible = true;
		DataTable^ table = gcnew DataTable();
		table->Load(read);
		chart->DataSource = table;
		chart->Series["series1"]->XValueMember = "nom_article";
		chart->Series["series1"]->YValueMembers = "quantite";

		chart->DataBind();
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