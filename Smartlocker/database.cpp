#include "database.hpp"

database::database(QString path)
{
    createDB(path);
}

database::~database()
{

}

void database::createDB(QString path)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);
    if(db.open())
    {
       createTable();
    }
}

void database::createTable()
{
    QSqlQuery query;
    query.exec("create table person "
              "(id integer primary key, "
              "firstname varchar(20), "
              "lastname varchar(30), "
              "age integer)");
}
