#include <iostream>
#include <vector>
#include <fstream>

class Database
{
private:
    /* data */
protected:
    //protected
public:
    Database(/* args */)
    {
        //constructor
    }
    ~Database()
    {
        //destructor
    }
    std::vector<std::string> list;
    std::string name;

    void write(std::vector<std::string> list);
    void read();
};
