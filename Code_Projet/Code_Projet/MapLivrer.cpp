#include "MapLivrer.h"

int MapLivrer::getIdclient()
{
    return id_client;
}

void MapLivrer::setIdclient(int idclient)
{
    id_client = idclient;
}

int MapLivrer::getIdadresse()
{
    return id_adresse;
}

void MapLivrer::setIdadresse(int idadresse)
{
    id_adresse = idadresse;
}

String^ MapLivrer::INSERT()
{
    return "insert into Livrer values(" + getIdclient() + "," + getIdadresse() + ")";
}

