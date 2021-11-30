#pragma once

using namespace System;

ref class MapVille
{
	int Id_Ville;
	String^ Ville;
	String^ Code_Postal;



public:
    int getIdVille();
    void setIdVille(int IdVille);

    String^ getVille();
    void setVille(String^ Ville);

    String^ getCodePostal();
    void setCodePostal(String^ CodePostal);

};

