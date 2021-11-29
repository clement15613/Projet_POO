#pragma once
using namespace System;

ref class MapPersonnel
{private :
	int id_personnel;
	String^ nom;
	String^ prenom;
	DateTime^ dateEmbauche;
	String^ motDePasse;
	int id_superieur;
	int id_addrese;

public :
	int getIdPersonnel();
	String^ getNom();
	String^ getPrenom();
	DateTime^ getDateEmbauche();
	String^ getMotDePasse();
	int getIdSuperieur();
	int getIdAdresse();
};

