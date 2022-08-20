#ifndef RESERVATION_H
# define RESERVATION_H
#include <iostream>
#include <string>

using namespace std;

class Hotel{

    public :

    Hotel();
    virtual ~Hotel();
    float price;
    int getDay();
    string getHotelName();
    int getRoomType();
    float getPrice(int roomType,int hotelName);
    int totalPrice( int day);


    void setHotelName(int hotelName);
    void setRoomType(int roomType);
    void setDay(int day);
    protected:

    private :
        int day;
        string hotelName;
        int roomType;


};

#endif
