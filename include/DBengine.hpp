#ifndef DATABASE_ENGINE_HPP
#define DATABASE_ENGINE_HPP

#include "./queryParser.hpp"
#include "./database.hpp"

enum class queryType {
    CREATE,
    SELECT,
    UPDATE,
    DELETE,
    INSERT,
    COUNT,
    USE,
    LIST,
    EXIT,
    UNKNOWN
};

class DBEngine {
    private: 
        Table current_table;
        CurrentDatabase current_database;
    public:
        DBEngine();
        queryType getQuery();
        void executeQuery();
        void createDB();
        void createTable();
        void add_table();
        void updateTable();
        void deleteTable();
        void selectCurrentDatabase();
        void selectCurrentTable();
};

#endif  // DATABASE_ENGINE_HPP