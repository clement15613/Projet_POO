#include "Controleur.h"

void Controleur::mdp(TextBox^ text) {
	this->state = !state;
	text->UseSystemPasswordChar = this -> state;
}

void Controleur::afficher_panel(Panel^ text)
{
	//this->Visible;
	text->Visible = this->Visible;
}

void Controleur::masquer_panel(Panel^ text)
{
	//this->Invisible;
	text->Visible = this -> Invisible;
}