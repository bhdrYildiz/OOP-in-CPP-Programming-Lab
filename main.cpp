#include <iostream>
#include <string>
#include "reservation.h"
#include "person.h"

using namespace std;

int main() {


    int chooseHotel;
    int chooseRoom;
    int day;
    string confirm ;
    string name , surname , email;
    int age,telephone;

    Person a;

    cout<<"Please enter your name : ";
    cin>>name;
    a.setFirstName(name);

    cout<<"Please enter your surname : ";
    cin>>surname;
    a.setSurName(surname);

    cout<<"Please enter your age : ";
    cin>>age;
    a.setAge(age);

    cout<<"Please enter your telephone number : ";
    cin>>telephone;
    a.setTelephone(telephone);

    cout<<"Please enter your email address : ";
    cin>>email;
    a.setEmail(email);

    a.setNumberOfPerson(4);

    cout<<"name : "<<a.getFullName()<<endl;
    cout<<"age : "<<a.getAge()<<endl;
    cout<<"Telephone number : "<<a.getTelephone()<<endl;
    cout<<"Email address : "<<a.getEmail()<<endl;




    Hotel b;
    cout<<"--------------------------Hotel Names----------------------------"<<endl;
    cout<<"1.Yildiz Hotel"<<endl<<"2.Kayakapi Hotel"<<endl<<"3.Dedeman Hotel"<<endl;

    cout<<"Please select Hotel that you want to make reservation  : "<<endl;
    cin>>chooseHotel;
    b.setHotelName(chooseHotel);
    switch (chooseHotel) {
        case 1:
            cout<<"******************Yildiz Hotel**************"<<endl;
            cout<<"-----------Room Types-----------"<<endl;
            cout<<"1.Standard Room(300$)"<<endl<<"2.Suit Room(500$)"<<endl<<"3.Honeymoon Suit(1000$)"<<endl;

            cout<<"Please enter room type ID : "<<endl;

            cin>>chooseRoom;
            b.setRoomType(chooseRoom);

            cout<<"How many days do you accommodation in hotel?"<<endl;
            cin>>day;
            b.setDay(day);

            b.getPrice(chooseRoom,chooseHotel);


             break;
        case 2:
            cout<<"******************Kayakapi Hotel**************"<<endl;
            cout<<"-----------Room Types-----------"<<endl;
            cout<<"1.Standard Room(250$)"<<endl<<"2.Suit Room(350$)"<<endl<<"3.Honeymoon Suit(900$)"<<endl;

            cin>>chooseRoom;
            b.setRoomType(chooseRoom);

            cout<<"How many days do you accommodation in hotel?"<<endl;
            cin>>day;
            b.setDay(day);

            b.getPrice(chooseRoom,chooseHotel);



            break;
        case 3:
            cout<<"******************Dedeman Hotel**************"<<endl;
            cout<<"-----------Room Types-----------"<<endl;
            cout<<"1.Standard Room(280$)"<<endl<<"2.Suit Room(360$)"<<endl<<"3.Honeymoon Suit(8000$)"<<endl;

            cin>>chooseRoom;
            b.setRoomType(chooseRoom);

            cout<<"How many days do you accommodation in hotel?"<<endl;
            cin>>day;
            b.setDay(day);

            b.getPrice(chooseRoom,chooseHotel);


            break;
    };
    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Total price : "<<b.totalPrice(day)<<"$"<<endl;
    cout<<"Do  you confirm total price ? "<<endl<< "(Y or N) :";
    cin>>confirm;

    if (confirm == "Y")
        cout<<"Reservation process completed successfully :):)"<<endl;
    else
        cout<<"The reservation process was not completed successfully :(:("<<endl;


   return 0;
}
