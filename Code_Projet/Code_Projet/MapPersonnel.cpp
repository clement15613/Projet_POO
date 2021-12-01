#include "MapPersonnel.h"

int MapPersonnel::getid_personnel()
{
	return id_personnel;
}
void MapPersonnel::setid_personnel(int newId_personnel)
{
	id_personnel = newId_personnel;
}
String^ MapPersonnel::getNom()
{
	return Nom;
}
void MapPersonnel::setNom(String^ NewNom)
{
	Nom = NewNom;
}
String^ MapPersonnel::getPrenom()
{
	return Prenom;
}
void MapPersonnel::setPrenom(String^ NewPrenom)
{
	Prenom = NewPrenom;
}
DateTime^ MapPersonnel::getDateEmbauche()
{
	return dateEmbauche;
}
void MapPersonnel::setDateEmbauche(DateTime^ NewdateEmbauche)
{
	dateEmbauche = NewdateEmbauche;
}
String^ MapPersonnel::getMotDePasse()
{
	return MotDePasse;
}
void MapPersonnel::setMotDePasse(String^ NewMotDePasse)
{
	MotDePasse = NewMotDePasse;
}
int MapPersonnel::getid_superieur()
{
	return id_superieur;
}
void MapPersonnel::setid_superieur(int NewIdSuperieur)
{
	id_superieur = NewIdSuperieur;
}
int MapPersonnel::getid_adresse()
{
	return id_addresse;
}
void MapPersonnel::setid_adresse(int NewIdAdresse)
{
	id_addresse = NewIdAdresse;
}