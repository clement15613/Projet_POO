#pragma once
using namespace System;

ref class MapCorrespond
{
private:
	int idVille;
	int idAdresse;

public:
	int getIdVille();
	int getIdAdresse();

	void setIdVille(int);
	void SetIdAdresse(int);

	String^ INSERT();
	String^ DELETE();
	String^ UPDATE();
};

