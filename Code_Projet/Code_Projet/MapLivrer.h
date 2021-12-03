#pragma once

using namespace System;

ref class MapLivrer
{
	int id_client;
	int id_adresse;
public:
    int getIdclient();
    void setIdclient(int idclient);

    int getIdadresse() ;
    void setIdadresse(int idadresse);

    String^ INSERT();
};

