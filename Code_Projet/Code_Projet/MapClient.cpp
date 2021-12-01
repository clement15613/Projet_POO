#include "MapClient.h"

int MapClient::getIdclient()
{
    return id_client;
}

void MapClient::setIdclient(int idclient)
{
    id_client = idclient;
}

String^ MapClient::getNom()
{
    return nom;
}

void MapClient::setNom(String^ nom)
{
    this->nom = nom;
}

String^ MapClient::getPrenom()
{
    return prenom;
}

void MapClient::setPrenom(String^ prenom)
{
    this->prenom = prenom;
}

String^ MapClient::getDatenaissance()
{
    return date_naissance;
}

void MapClient::setDatenaissance(String^ datenaissance)
{
    date_naissance = datenaissance;
}

String^ MapClient::getDatefirstachat()
{
    return date_first_achat;
}

void MapClient::setDatefirstachat(String^ datefirstachat)
{
    date_first_achat = datefirstachat;
}

