#include "PoliceOfficer.h"
using namespace std;
PoliceOfficer::PoliceOfficer()
{
    lastName = "";
    firstName = "";
    badgeNum = "";
}
PoliceOfficer::PoliceOfficer(string lName, string fName, string bNum)
{
    lastName = lName;
    firstName = fName;
    badgeNum = bNum;
}
bool PoliceOfficer::isTicketNeccessary(ParkedCar& C, ParkingMeter& M)
{
    if ((M.getPurchasedParkingMins() - C.getNumParkedMinutes()) < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
string PoliceOfficer::print()
{
    string officerDescription = "           - Police Officer -          \n";
    officerDescription += "\n  First Name: " + firstName;
    officerDescription += "\n  Last Name: " + lastName;
    officerDescription += "\n  Badge Number: " + badgeNum;
    return officerDescription;
}
