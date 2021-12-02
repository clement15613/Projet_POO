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

String^ MapCommande::getDateLivraison()
{
    return dateLivraison;
}

void MapCommande::setDateLivraison(String^ dateLivraison)
{
    this->dateLivraison = dateLivraison;
}

String^ MapCommande::getDateEmission()
{
    return dateEmission;
}

void MapCommande::setDateEmission(String^ dateEmission)
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