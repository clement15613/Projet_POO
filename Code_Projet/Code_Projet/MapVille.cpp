#include "MapVille.h"

int MapVille::getIdVille()
{
    return Id_Ville;
}

void MapVille::setIdVille(int IdVille)
{
    Id_Ville = IdVille;
}

String^ MapVille::getVille()
{
    return Ville;
}

void MapVille::setVille(String^ Ville)
{
    this->Ville = Ville;
}

String^ MapVille::getCodePostal()
{
    return Code_Postal;
}

void MapVille::setCodePostal(String^ CodePostal)
{
    Code_Postal = CodePostal;
}

