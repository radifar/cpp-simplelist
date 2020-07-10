#include <iostream>
#include <vector>
#include <string>

#include "include/list.hpp"
#include "include/database.hpp"

int main(int arg_count, char *args[])
{
    if (arg_count > 1)
    {
        List simpleList;
        simpleList.name = std::string(args[1]);
        simpleList.print_menu();
    }
    else
    {
        std::cout << "Username not supplied.. exiting the program" << std::endl;
    }

    Database data;
    data.write();
    data.read();

    return 0;
}
