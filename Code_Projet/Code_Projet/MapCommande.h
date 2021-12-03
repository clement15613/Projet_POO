#pragma once

using namespace System;

ref class MapCommande
{
	int id_commande;
	String^ reference;
    DateTime^ dateLivraison;
    DateTime^ dateEmission;
    DateTime^ dateCommande;
	int id_client;
public:
    int getIdcommande();
    void setIdcommande(int idcommande);

    String^ getReference();
    void setReference(String^ reference);

    DateTime^ getDateLivraison();
    void setDateLivraison(DateTime^ dateLivraison);

    DateTime^ getDateEmission();
    void setDateEmission(DateTime^ dateEmission);

    DateTime^ getDateCommande();
    void setDateCommande(DateTime^ dateCommande);

    int getIdclient();
    void setIdclient(int idclient);

    String^ INSERTX();
    String^ INSERT();
    String^ DELETE();

};

