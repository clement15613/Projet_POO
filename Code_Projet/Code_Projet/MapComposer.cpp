#include "MapComposer.h"

int MapComposer::getIdcommande()
{
    return id_commande;
}

void MapComposer::setIdcommande(int idcommande)
{
    id_commande = idcommande;
}

int MapComposer::getIdarticle()
{
    return id_article;
}

void MapComposer::setIdarticle(int idarticle)
{
    id_article = idarticle;
}

int MapComposer::getQuantite()
{
    return quantite;
}

void MapComposer::setQuantite(int quantite)
{
    this->quantite = quantite;
}

String^ MapComposer::INSERT()
{
    return "insert into composer values (" + getIdcommande() + "," + getIdarticle() + ","+getQuantite()+")";
}

String^ MapComposer::DELETE()
{
    return "delete from composer where id_commande = " + getIdcommande();
}