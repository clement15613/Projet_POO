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

DateTime^ MapClient::getDatenaissance()
{
    return date_naissance;
}

void MapClient::setDatenaissance(DateTime^ datenaissance)
{
    date_naissance = datenaissance;
}

DateTime^ MapClient::getDatefirstachat()
{
    return date_first_achat;
}

void MapClient::setDatefirstachat(DateTime^ datefirstachat)
{
    date_first_achat = datefirstachat;
}

String^ MapClient::INSERT()
{
    return "insert into Client values('" + getNom() + "', '" + getPrenom() + "', '" + getDatenaissance() + "', '" + getDatefirstachat() + "'); select @@IDENTITY";
}

String^ MapClient::UPDATE()
{
    return "Update Client set nom_Client ='" + getNom() + "', prenom = '" + getPrenom() + "', date_naissance ='" + getDatenaissance() + "', date_first_achat = '" + getDatefirstachat()+"'";
}

String^ MapClient::Delete()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

/*String^ MapArticle::INSERT()
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
}*/