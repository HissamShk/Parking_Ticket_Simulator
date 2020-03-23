/*ParkingTicketSimulator by Hissamuddin Shaikh*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;
int main()
{
    /*Variable Setup*/
    string carMake;
    string carModel;
    string carColor;
    string carLicenseNum;
    string lastName;
    string firstName;
    string badgeNum;
    int numMinutesParked;
    int purchasedParkingMins;
    /*Setup for Car Information Input*/
    cout << endl << setw(31) << "Parking Ticket Simulator" << endl;
    cout << " -------------------------------------" << endl;
    cout << setw(17) << "Car Information" << endl;
    cout << " -------------------------------------" << endl;
    cout << setw(12) << "Car Make: ";
    cin >> carMake;
    cout << endl << setw(13) << "Car Model: ";
    cin >> carModel;
    cout << endl << setw(13) << "Car Color: ";
    cin >> carColor;
    cout << endl << setw(22) << "Car License Number: ";
    cin >> carLicenseNum;
    /*Setup for Input of Minutes Car has been Parked*/
    do
    {
        cout << endl << setw(45) << "Number of Minutes the Car has been Parked: ";
        cin >> numMinutesParked;
    } while (numMinutesParked < 0);
    /*Setup for passing information to the class ParkedCar*/
    ParkedCar Car(carMake, carModel, carColor, carLicenseNum, numMinutesParked);
    /*Setup for Meter Information Retrieval*/
    cout << " -------------------------------------" << endl;
    cout << setw(19) << "Meter Information" << endl;
    cout << " -------------------------------------" << endl << endl;
    do
    {
        cout << setw(31) << "Number of Minutes Purchased: " ;
        cin >> purchasedParkingMins;
    }while (purchasedParkingMins < 0);
    ParkingMeter Meter(purchasedParkingMins);
    /*Setup for Police Officer Information*/
    cout << endl << " -------------------------------------" << endl;
    cout << setw(28) <<"Police Officer Information" << endl;
    cout << " -------------------------------------" << endl;
    cout << setw(14) << "First Name: ";
    cin >> firstName;
    cout << endl << setw(13) << "Last Name: ";
    cin >> lastName;
    cout << endl << setw(16) << "Badge Number: ";
    cin >> badgeNum;
    /*Setup for calculating if a Parking Ticket needs to be issued or not*/
    PoliceOfficer Officer(lastName, firstName, badgeNum);
    if (Officer.isTicketNeccessary(Car, Meter))
    {
        ParkingTicket Ticket(Car, Meter, Officer);
        cout << Ticket.print();
    }
    else
    {
        cout << endl << " -------------------------------------" << endl;
        cout << setw(28) <<"* No Ticket Issued *" << endl;
        cout << " -------------------------------------" << endl;
    }
    return 0;

}
