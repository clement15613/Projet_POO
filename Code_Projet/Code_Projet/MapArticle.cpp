#include "MapArticle.h"

int MapArticle::getid_article()
{
    return id_article;
}

void MapArticle::setid_article(int Newid_article)
{
    this->id_article;
}

String^ MapArticle::getNom()
{
    return nom;
}

void MapArticle::setNom(String^ nom)
{
    this->nom = nom;
}

String^ MapArticle::getNature()
{
    return nature;
}

void MapArticle::setNature(String^ nature)
{
    this->nature = nature;
}

float MapArticle::getPrixHT()
{
    return prixHT;
}

void MapArticle::setPrixHT(float prixHT)
{
    this->prixHT = prixHT;
}

float MapArticle::getTauxTVA()
{
    return tauxTVA;
}

void MapArticle::setTauxTVA(float tauxTVA)
{
    this->tauxTVA = tauxTVA;
}

int MapArticle::getStock()
{
    return stock;
}

void MapArticle::setStock(int stock)
{
    this->stock = stock;
}

int MapArticle::getSeuilReapprovisionnement()
{
    return seuilReapprovisionnement;
}

void MapArticle::setSeuilReapprovisionnement(int seuilReapprovisionnement)
{
    this->seuilReapprovisionnement = seuilReapprovisionnement;
}

String^ MapArticle::getCouleur()
{
    return couleur;
}

void MapArticle::setCouleur(String^ couleur)
{
    this->couleur = couleur;
}

String^ MapArticle::INSERT()
{
    return "insert into Article values('" + getNom() + "','" + getNature() + "'," + getPrixHT().ToString()->Replace(",",".") + ",'" + getTauxTVA().ToString()->Replace(",", ".") + "','" + getStock() + "'," + getSeuilReapprovisionnement().ToString() + ",'" + getCouleur() + "')";
}

String^ MapArticle::DELETE()
{
    return "delete from Article where nom_article  = ";
}

String^ MapArticle::UPDATE()
{
    return "update Article set nom_article= '" + getNom() + "', nature = '" + getNature() + "', prix_HT = " + getPrixHT().ToString()->Replace(",", ".") + ", taux_TVA = " + getTauxTVA().ToString()->Replace(",", ".") + ", stock = " + getStock().ToString() + ", seuil_approvisionnement = " + getSeuilReapprovisionnement().ToString() + ", couleur = '" + getCouleur()+ "'";
}