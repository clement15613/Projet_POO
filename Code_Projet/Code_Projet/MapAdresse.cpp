#include "MapAdresse.h"

int MapAdresse::getid_adresse()
{
	return id_adresse;
}
int MapAdresse::setid_adresse(int Newid_adresse)
{
	id_adresse = Newid_adresse;
}
int MapAdresse::getnumero()
{
	return numero;
}
int MapAdresse::setnumero(int Newnumero)
{
	numero = Newnumero;
}
String^ MapAdresse::getrue()
{
	return rue;
}
String^ MapAdresse::setrue(String^ Newrue)
{
	rue = Newrue;
}
String^ MapAdresse::getcomplement()
{
	return complement;
}
String^ MapAdresse::setcomplement(String^ Newcomplement)
{
	complement = Newcomplement;
}