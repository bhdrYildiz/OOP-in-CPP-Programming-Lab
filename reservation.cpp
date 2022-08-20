#include "reservation.h"
#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Hotel::Hotel() {

}
Hotel::~Hotel(){

}
void Hotel::setHotelName(int hotelName) {
    this -> hotelName = hotelName;
}
void Hotel::setRoomType(int roomType) {
    this -> roomType = roomType;
}
void Hotel::setDay(int day) {
    this->day = day;
}
int Hotel::getDay() {
    return day;
}
string Hotel::getHotelName() {
    return hotelName;
}
int Hotel::getRoomType() {
    return roomType;
}
int Hotel::totalPrice(int day){
    return day * price;
}
float Hotel::getPrice(int roomType,int hotelName){
    if (roomType == 1 && hotelName == 1)
        price = 300;
    else if(roomType == 1 && hotelName == 2)
        price = 250;
    else if(roomType == 1 && hotelName == 3)
        price = 280;
    else if(roomType == 2 && hotelName == 1)
        price = 500;
    else if(roomType == 2 && hotelName == 2)
        price = 350;
    else if(roomType == 2 && hotelName == 3)
        price = 360;
    else if(roomType == 3 && hotelName == 1)
        price = 1000;
    else if(roomType == 3 && hotelName == 2)
        price = 900;
    else if(roomType == 3 && hotelName == 3)
        price = 8000;

    return price;
}