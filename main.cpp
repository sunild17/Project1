#include "headers/Brrower.h"
#include <string>
int main()
{
    std::string name = "Anamika";
    Brrower brrw(10, name);
    Person *ptr;
    std::string name2= "MyName";
    ptr = new Brrower(12, name2);
    
    ptr->getDetails();



    return 0;
}