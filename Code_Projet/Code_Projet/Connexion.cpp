#include "Connexion.h"
#include "pch.h"

Connexion::Connexion()
{
	this->connexionLink = "Data Source=DESKTOP-PDDBHRE\\MSSQL_THEO;Initial Catalog=projet_POO;Integrated Security=True";
	this->rqSql = "RIEN";
	this->connect = gcnew SqlConnection(this->connexionLink);
	this->cmd = gcnew SqlCommand(this->rqSql, this->connect);
	this->cmd->CommandType = CommandType::Text;

}

void Connexion::actionRows(String^ rqSql)
{
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
	{
		if (rqSql == "RIEN")
		{
			this->rqSql = rqSql;
		}
		else
		{
			this->rqSql = "RIEN";
		}
	}
}

