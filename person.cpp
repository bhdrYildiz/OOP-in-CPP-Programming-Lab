#include <iostream>
#include "reservation.h"
#include <string>
#include "person.h"

using namespace std;

Person::Person(){
}

Person::~Person(){
}

void Person::setNumberOfPerson(int numberOfPerson) {
    this->numberOfPerson = numberOfPerson;
}

void Person::setAge(int age) {
    this->age = age;
}
void Person::setFirstName(string firstName) {
    this-> firstName = firstName;
}

void Person::setSurName(string surName) {

    this->surname = surName;
}
void Person::setEmail(string email) {
    this -> email = email;
}
void Person::setTelephone(int telephone) {
    this -> telephone = telephone;
}

string Person::getFullName(){
    return firstName + " " + surname;
}
string Person::getFirstName() {
    return firstName;
}

string Person::getSurName() {
    return surname;
}
int Person::getTelephone() {
    return telephone;
}
string Person::getEmail() {
    return email;
}
int Person::getAge() {
    return age;
}