#pragma once

using namespace System;

ref class MapCommande
{
	int id_commande;
	String^ reference;
	String^ dateLivraison;
	String^ dateEmission;
	int id_client;
public:
    int getIdcommande();
    void setIdcommande(int idcommande);

    String^ getReference();
    void setReference(String^ reference);

    String^ getDateLivraison();
    void setDateLivraison(String^ dateLivraison);

    String^ getDateEmission();
    void setDateEmission(String^ dateEmission);

    int getIdclient();
    void setIdclient(int idclient);

};

