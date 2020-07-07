#ifndef DATABASE_HPP
#define DATABASE_HPP

#endif // DATABASE_HPP

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

class database : public QObject
{
    Q_OBJECT
public:
    database(QString path);
    ~database();

private:
    void createDB(QString path);
    void createTable();
};
