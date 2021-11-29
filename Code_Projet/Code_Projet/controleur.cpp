#include "Controleur.h"
#include "pch.h"
#include "Connexion.h"


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