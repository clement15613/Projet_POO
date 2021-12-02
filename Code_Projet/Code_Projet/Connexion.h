#pragma once
#include "pch.h"

ref class Connexion
{

	public:
		Connexion();
		void actionRows(String^);
		int actionRowsID(String^);
		DataSet^ getRows(String^, String^);
		SqlDataReader^ dataReader(String^);
		SqlConnection^ connect;
	private:
		void setSQL(String^);
		
		String^ connexionLink;
		String^ rqSql;
		
		SqlCommand^ cmd;
		SqlDataAdapter^ dataAdapter;
		DataSet^ dtSet;

		
	};
