#include "Connexion.h"
#include "pch.h"

Connexion::Connexion()
{
	this->connexionLink = "Data Source=MSI-62QD\\MSSQL_CLEMENT;Initial Catalog=projet_POO;User ID=CNX_PROJET;Password=projet";
	this->rqSql = "RIEN";
	this->connect = gcnew SqlConnection(this->connexionLink);
	this->cmd = gcnew SqlCommand(this->rqSql, this->connect);
	this->cmd->CommandType = CommandType::Text;

}


SqlDataReader^ Connexion::dataReader(String^ rqSql) 
{
	setSQL(rqSql);
	this->cmd->CommandText = this->rqSql;
	connect->Open();
	return cmd->ExecuteReader();
};


void Connexion::actionRows(String^ rqSql)
{
		this->setSQL(rqSql);
		this->cmd->CommandText = this->rqSql;
		this->connect->Open();
		this->cmd->ExecuteNonQuery();
		this->connect->Close();
}

int Connexion::actionRowsID(String^ rqSql) 
{ 
	int id = 0;
	setSQL(rqSql);
	this->cmd->CommandText = this->rqSql;
	connect->Open();
	id = Convert::ToInt32(cmd->ExecuteScalar());
	connect->Close();
	return id;
}

DataSet^ Connexion::getRows(String^ rqSql, String^ dataTableName)
{
	this->setSQL(rqSql);
	this->dataAdapter = gcnew SqlDataAdapter(this->cmd);
	this->cmd->CommandText = this->rqSql;
	this->dtSet = gcnew DataSet();
	this->dataAdapter->Fill(this->dtSet, dataTableName);
	return this->dtSet;
}

void Connexion::setSQL(String^ rqSql)
{
	this->rqSql = rqSql;
}


