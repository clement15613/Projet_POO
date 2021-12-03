#pragma once

using namespace System;

ref class MapComposer
{
	int id_commande;
	int id_article;
	int quantite;
public:
    int getIdcommande();
    void setIdcommande(int idcommande);

    int getIdarticle();
    void setIdarticle(int idarticle);

    int getQuantite();
    void setQuantite(int quantite);

    String^ INSERT();
    String^ DELETE();
};

