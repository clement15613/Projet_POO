#include "Controleur.h"
#include "pch.h"

void Controleur::mdp(TextBox^ text) {
	this->state = !state;
	text->UseSystemPasswordChar = this -> state;
}
