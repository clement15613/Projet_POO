#include "MapFacturer.h"

int MapFacturer::getIdclient()
{
    return id_client;
}

void MapFacturer::setIdclient(int idclient)
{
    id_client = idclient;
}

int MapFacturer::getIdadresse()
{
    return id_adresse;
}

void MapFacturer::setIdadresse(int idadresse)
{
    id_adresse = idadresse;
}

String^ MapFacturer::DELETE()
{
    return "delete from facturer where id_client = " + getIdclient();
}