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

String^ MapVille::INSERT()
{
    return "insert into ville values ('" + getVille() + "','" + getCodePostal() + "');SELECT @@IDENTITY;";
}

String^ MapVille::UPDATE()
{
    return "update ville set ville = '" + getVille() + "', code_postal = '" + getCodePostal() + "' where id_ville = " + getIdVille();
}
