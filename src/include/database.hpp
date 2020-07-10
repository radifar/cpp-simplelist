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
    // 2D string vector
    std::vector<std::vector<std::string>> mainList;
    std::string name;

    void write(std::vector<std::vector<std::string>> mainList);
    std::vector<std::vector<std::string>> read();
};
