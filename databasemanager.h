#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

class DatabaseManager {
public:
    static DatabaseManager& instance();
    QSqlDatabase& getDatabase();

private:
    DatabaseManager();
    ~DatabaseManager();
    void smfmiwemifwme();
    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    QSqlDatabase db;
};

#endif // DATABASEMANAGER_H
