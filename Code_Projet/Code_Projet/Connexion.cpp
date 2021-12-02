#include "Connexion.h"
#include "pch.h"

Connexion::Connexion()
{
	this->connexionLink = "Data Source=database-poo.cdw6dp5shcve.eu-west-3.rds.amazonaws.com;Initial Catalog"
		L"=projet_POO;Persist Security Info=True;User ID=admin;Password=123456789";
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

int Connexion::actionRowsID(String^ rqSql) { return 0; }

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

