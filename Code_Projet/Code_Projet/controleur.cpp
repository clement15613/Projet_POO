#include "controleur.h"

String^ controleur::gettext(TextBox^ oui) {
	return oui->Text;
}

void controleur::setlabel(Label^ non, TextBox^ slt) {
	non->Text = gettext(slt);
}