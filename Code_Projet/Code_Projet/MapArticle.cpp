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

