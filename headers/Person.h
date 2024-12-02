#ifndef PERSON_H
#define PERSON_H

#include <string>


class Person {
    protected:
         int m_id;
         std::string m_name;
    public:

        Person(int id, std::string& name): m_id(id), m_name(name){}


        virtual ~Person() = default;
        virtual void  getDetails()  = 0;

};





#endif