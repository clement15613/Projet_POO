#include "MapAdresse.h"

int MapAdresse::getid_adresse()
{
	return id_adresse;
}
int MapAdresse::setid_adresse(int Newid_adresse)
{
	return id_adresse = Newid_adresse;
}
int MapAdresse::getnumero()
{
	return numero;
}
int MapAdresse::setnumero(int Newnumero)
{
	return numero = Newnumero;
}
String^ MapAdresse::getrue()
{
	return rue;
}
String^ MapAdresse::setrue(String^ Newrue)
{
	return rue = Newrue;
}
String^ MapAdresse::getcomplement()
{
	return complement;
}
String^ MapAdresse::setcomplement(String^ Newcomplement)
{
	return complement = Newcomplement;
}

String^ MapAdresse::INSERT()
{
	return "insert into adresse values(" + getnumero() + ",'" + getrue() + "','" + getcomplement() + "');SELECT @@IDENTITY;";
}

String^ MapAdresse::DELETE()
{
	return "delete from adresse where id_adresse = " + getid_adresse();
}