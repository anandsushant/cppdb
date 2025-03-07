#ifndef DATABASE_HPP
#define DATABASE_HPP

class Table {
    private:
        std::string table_name;

        int no_of_fields; // columns
        int no_of_rows; // rows or each data entry
        
        std::string table_location; // file location inside database folder

        std::vector<std::pair<std::string, std::string>> fields;    // fieldname and its datatype
        std::vector<std::string> field_names;
    public:
        void add_row();
        void delete_row();
        void update_fields();
        Table get_table();
};

class CurrentDatabase {
    private:
        int databaseID;
        std::string database_name;
        std::string database_location; // folder location
        size_t table_count;
    public:
        std::vector<std::pair<std::string, int>> table_list; // each pair have table name and tableID
        std::vector<std::pair<int, Table>> tables;
};



#endif // DATABASE_HPP