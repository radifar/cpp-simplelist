#include "include/database.hpp"

void Database::write(std::vector<std::string> list)
{
    std::ofstream db;
    db.open("db/lists.sldb");
    if (db.is_open())
    {
        for (int list_index = 0; list_index < (int)list.size(); list_index++)
        {
            db << " * " << list[list_index] << "\n";
        }
    }
    else
    {
        std::cout << "Sorry, cannot open file for writing.";
    }

    db.close();
}

void Database::read()
{
    std::string line;
    std::ifstream db;
    db.open("db/lists.sldb");
    if (db.is_open())
    {
        while ( std::getline(db, line, '\n'))
        {
            std::cout << line << "\n";
        }
    }
    else
    {
        std::cout << "Cannot open file for reading.\n";
    }
    
}