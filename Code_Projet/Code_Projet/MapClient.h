#pragma once

using namespace System;

ref class MapClient
{
	int id_client;
	String^ nom;
	String^ prenom;
    DateTime^ date_naissance;
	DateTime^ date_first_achat;
public:
    int getIdclient();
    void setIdclient(int idclient);

    String^ getNom();
    void setNom(String^ nom);

    String^ getPrenom();
    void setPrenom(String^ prenom);

    DateTime^ getDatenaissance();
    void setDatenaissance(DateTime^ datenaissance);

    DateTime^ getDatefirstachat();
    void setDatefirstachat(DateTime^ datefirstachat);

    String^ INSERT();
    String^ UPDATE();
    String^ Delete();
};

