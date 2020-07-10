#include <iostream>
#include <vector>

class List
{
private:
    /* data */
public:
    List(/* args */)
    {
        //constructor
    }
    ~List()
    {
        //destructor
    }

    std::vector<std::vector<std::string>> mainList;
    std::vector<std::string> list;
    std::string name;
    int currentUserIndex;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    bool find_userList();
    void save_list();
};
