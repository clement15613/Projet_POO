#include "MapCommande.h"

int MapCommande::getIdcommande()
{
    return id_commande;
}

void MapCommande::setIdcommande(int idcommande)
{
    id_commande = idcommande;
}

String^ MapCommande::getReference()
{
    return reference;
}

void MapCommande::setReference(String^ reference)
{
    this->reference = reference;
}

DateTime^ MapCommande::getDateLivraison()
{
    return dateLivraison;
}

void MapCommande::setDateLivraison(DateTime^ dateLivraison)
{
    this->dateLivraison = dateLivraison;
}

DateTime^ MapCommande::getDateCommande()
{
    return dateCommande;
}

void MapCommande::setDateCommande(DateTime^ dateCommande)
{
    this->dateCommande = dateCommande;
}

DateTime^ MapCommande::getDateEmission()
{
    return dateEmission;
}

void MapCommande::setDateEmission(DateTime^ dateEmission)
{
    this->dateEmission = dateEmission;
}

int MapCommande::getIdclient()
{
    return id_client;
}

void MapCommande::setIdclient(int idclient)
{
    id_client = idclient;
}

String^ MapCommande::INSERTX()
{
    return "insert into commande values ('xxx','2000-01-01','2000-01-01','2000-01-01',1);select @@IDENTITY";
}

String^ MapCommande::INSERT()
{
    return "update commande set date_livraison = '" + getDateLivraison() + "', date_emission ='" + getDateEmission() + "', date_commande ='" + getDateCommande() + "',id_client = " + getIdclient() + " where id_commande = " + getIdcommande();
}