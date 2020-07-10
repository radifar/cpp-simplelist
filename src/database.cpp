#include "include/database.hpp"

void Database::write()
{
    std::ofstream db;
    db.open("db/lists.sldb");
    if (db.is_open())
    {
        db << "1\n2\n3\n4\n5\n";
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