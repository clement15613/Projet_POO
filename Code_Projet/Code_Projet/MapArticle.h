#pragma once

using namespace System;

ref class MapArticle
{
private:
	int id_article;
	String^ nom;
	String^ nature;
	float prixHT;
	float tauxTVA;
	int stock;
	int seuilReapprovisionnement;
	String^ couleur;
public:
    int getid_article();
    void setid_article(int Newid_article);

    String^ getNom();
    void setNom(String^ nom);

    String^ getNature();
    void setNature(String^ nature);

    float getPrixHT();
    void setPrixHT(float prixHT);

    float getTauxTVA();
    void setTauxTVA(float tauxTVA);

    int getStock();
    void setStock(int stock);

    int getSeuilReapprovisionnement() ;
    void setSeuilReapprovisionnement(int seuilReapprovisionnement);

    String^ getCouleur();
    void setCouleur(String^ couleur);

};

