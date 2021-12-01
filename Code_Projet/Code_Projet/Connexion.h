#pragma once
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
using namespace System::Windows::Forms::DataVisualization::Charting;
using namespace System::Drawing;
using namespace System::Collections;

ref class Connexion
{

	public:
		Connexion();
		void actionRows(String^);
		int actionRowsID(String^);
		DataSet^ getRows(String^, String^);
		SqlDataReader^ dataReader(String^);
	private:
		void setSQL(String^);
		
		String^ connexionLink;
		String^ rqSql;
		SqlConnection^ connect;
		SqlCommand^ cmd;
		SqlDataAdapter^ dataAdapter;
		DataSet^ dtSet;

		
	};
