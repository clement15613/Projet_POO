#pragma once

using namespace System;

ref class MapClient
{
	int id_client;
	String^ nom;
	String^ prenom;
	String^ date_naissance;
	String^ date_first_achat;
public:
    int getIdclient();
    void setIdclient(int idclient);

    String^ getNom();
    void setNom(String^ nom);

    String^ getPrenom();
    void setPrenom(String^ prenom);

    String^ getDatenaissance();
    void setDatenaissance(String^ datenaissance);

    String^ getDatefirstachat();
    void setDatefirstachat(String^ datefirstachat);

    String^ DELETE();
};

