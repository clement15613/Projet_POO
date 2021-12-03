#include "MapPayment.h"

int MapPayment::getIdpayment()
{
    return id_payment;
}

void MapPayment::setIdpayment(int idpayment)
{
    id_payment = idpayment;
}

DateTime^ MapPayment::getDatePayment()
{
    return datePayment;
}

void MapPayment::setDatePayment(DateTime^ datePayment)
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
    return "insert into Payment values ('2000-01-01','xxx',"+getIdcommande()+"); select @@IDENTITY";
}

String^ MapPayment::INSERT()
{
    return "update payment set date_payment = '" + getDatePayment() + "', moyen_payment = '" + getMoyenPayment() + "' where id_payment = " + getIdpayment();
}

String^ MapPayment::DELETE()
{
    return "delete from payment where id_commande = " + getIdcommande();
}