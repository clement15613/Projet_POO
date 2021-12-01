#pragma once

using namespace System;


ref class MapAdresse
{
private:
	int id_adresse;
	int numero;
	String^ rue;
	String^ complement;
public:
	int getid_adresse();
	int setid_adresse(int Newid_adresse);
	int getnumero();
	int setnumero(int Newnumero);
	String^ getrue();
	String^ setrue(String^ Newrue);
	String^ getcomplement();
	String^ setcomplement(String^ Newcomplement);
	String^ INSERT();
	String^ DELETE();
};

