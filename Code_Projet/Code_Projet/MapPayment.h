#pragma once

using namespace System;

ref class MapPayment
{
	int id_payment;
	DateTime^ datePayment;
	String^ moyenPayment;
	int id_commande;
public:
    int getIdpayment();
    void setIdpayment(int idpayment);

    DateTime^ getDatePayment();
    void setDatePayment(DateTime^ datePayment);

    String^ getMoyenPayment();
    void setMoyenPayment(String^ moyenPayment);

    int getIdcommande();
    void setIdcommande(int idcommande);

    String^ INSERTX();
    String^ INSERT();
    String^ DELETE();
};
