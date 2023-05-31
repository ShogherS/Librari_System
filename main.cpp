#include <iostream>
#include <string>
#include <vector>
#include "material.h"
#include "book.h"
#include "library.h"

int main()
{
    int year = 2023;
    std::string title = "Effectie C++";
    std::string author = "Meyers";
    std::string gener = "Computer science";
    int pages = 321;
    Book book1 (title, author, year, gener, pages);
//    book1.display();
    Library mylib;
    mylib.add_book( book1);
    int num = mylib.find( title );
    std::cout << num << std::endl;
    bool book1_status = mylib[num]->getBorrowed();   
    mylib[num]->returning();
    mylib[num]->borrow();
    mylib[num]->returning();
}

