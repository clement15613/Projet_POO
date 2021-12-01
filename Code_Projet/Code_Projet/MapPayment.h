#pragma once

using namespace System;

ref class MapPayment
{
	int id_payment;
	String^ datePayment;
	String^ moyenPayment;
	int id_commande;
public:
    int getIdpayment();
    void setIdpayment(int idpayment);

    String^ getDatePayment();
    void setDatePayment(String^ datePayment);

    String^ getMoyenPayment();
    void setMoyenPayment(String^ moyenPayment);

    int getIdcommande();
    void setIdcommande(int idcommande);

};
