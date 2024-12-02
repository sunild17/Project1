#ifndef BRROWER_H
#define BRROWER_H

#include "Person.h"
#include <vector>
#include <string>
#include <iostream>

class Brrower: public Person {
    private:
        std::vector<std::string> borrowebooks;
    public:
        Brrower(int id, std::string& name): Person(id, name) {}

        void borrowBook(std::string* book);
        void returnBook(std::string* book);


        void  getDetails()  override;


};


#endif