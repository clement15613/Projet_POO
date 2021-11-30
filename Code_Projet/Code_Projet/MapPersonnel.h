#pragma once
using namespace System;

ref class MapPersonnel
{private :
	int id_personnel;
	String^ Nom;
	String^ Prenom;
	DateTime^ dateEmbauche;
	String^ MotDePasse;
	int id_superieur;
	int id_addresse;

public:
	int getid_personnel();
	void setid_personnel(int newId_personnel);
	String^ getNom();
	void setNom(String^ NewNom);
	String^ getPrenom();
	void setPrenom(String^ NewPrenom);
	DateTime^ getDateEmbauche();
	void setDateEmbauche(DateTime^ NewdateEmbauche);
	String^ getMotDePasse();
	void setMotDePasse(String^ NewMotDePasse);
	int getid_superieur();
	void setid_superieur(int NewIdSuperieur);
	int getid_adresse();
	void setid_adresse(int NewIdAdresse);
};

