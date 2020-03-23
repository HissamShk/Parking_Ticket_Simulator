#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include <string>
using namespace std;
class PoliceOfficer
{
    public:
        /*Default Constructor*/
        PoliceOfficer();
        /*Constructor with Parameters*/
        PoliceOfficer(string lName, string fName, string bNum);
        /*Function to calculate whether or not a Ticket should be issued*/
        bool isTicketNeccessary(ParkedCar& C, ParkingMeter& M);
        /*Function to display the values in all Private Variables*/
        string print();
    private:
        /*Stores the Police Officers Last Name*/
        string lastName;
        /*Stores the Police Officers First Name*/
        string firstName;
        /*Stores the Police Officers Badge Name*/
        string badgeNum;
};
#endif // POLICEOFFICER_H
