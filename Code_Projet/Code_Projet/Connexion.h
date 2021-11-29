#pragma once
#include "pch.h"

ref class Connexion
{

	public:
		Connexion();
		void actionRows(String^);
		int actionRowsID(String^);
		DataSet^ getRows(String^, String^);

	private:
		void setSQL(String^);
		
		String^ connexionLink;
		String^ rqSql;
		SqlConnection^ connect;
		SqlCommand^ cmd;
		SqlDataAdapter^ dataAdapter;
		DataSet^ dtSet;

		
	};
