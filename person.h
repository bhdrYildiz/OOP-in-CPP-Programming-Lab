#ifndef PERSON_H
# define PERSON_H
#include "reservation.h"
#include <iostream>
#include <string>

using namespace std;

class Person{

    public :
        Person();
        virtual ~Person();

        string getFullName();
        string getFirstName();
        string getSurName();;
        int getTelephone();
        string getEmail();
        int getAge();

        void setNumberOfPerson(int numberOfPerson);
        void setFirstName(string firstName);
        void setSurName(string surName);
        void setTelephone(int telephone);
        void setEmail(string email);
        void setAge(int age);

    protected:

    private:
        int numberOfPerson;
        string firstName;
        string surname;
        int age;
        int telephone;
        string email;

};
#endif
