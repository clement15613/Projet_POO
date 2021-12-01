#include "MapCorrespond.h"


int MapCorrespond::getIdVille()
{
	return idVille;
}

int MapCorrespond::getIdAdresse()
{
	return idAdresse;
}

void MapCorrespond::setIdVille(int newidville)
{
	idVille = newidville;
}

void MapCorrespond::SetIdAdresse(int newidadresse)
{
	idAdresse = newidadresse;
}


String^ MapCorrespond::INSERT()
{
	return "insert into correspond values (" + getIdVille() + "," + getIdAdresse() + ")";
}