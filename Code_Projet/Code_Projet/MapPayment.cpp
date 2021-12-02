#include "MapPayment.h"

int MapPayment::getIdpayment()
{
    return id_payment;
}

void MapPayment::setIdpayment(int idpayment)
{
    id_payment = idpayment;
}

String^ MapPayment::getDatePayment()
{
    return datePayment;
}

void MapPayment::setDatePayment(String^ datePayment)
{
    this->datePayment = datePayment;
}

String^ MapPayment::getMoyenPayment()
{
    return moyenPayment;
}

void MapPayment::setMoyenPayment(String^ moyenPayment)
{
    this->moyenPayment = moyenPayment;
}

int MapPayment::getIdcommande()
{
    return id_commande;
}

void MapPayment::setIdcommande(int idcommande)
{
    id_commande = idcommande;
}


String^ MapPayment::INSERTX() 
{
    return "insert into Payment values ('2000-01-01','xxx','1'); select @@IDENTITY";
}
