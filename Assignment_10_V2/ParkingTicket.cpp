#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include <string>
#include <cmath>
#include <cstdio>
#include <sstream>
using namespace std;
ParkingTicket::ParkingTicket(ParkedCar &carT, ParkingMeter &meterT, PoliceOfficer &officerT)
{
    Car = carT;
    Meter = meterT;
    Officer = officerT;
    fineAmount = calcFineAmount();
}
int ParkingTicket::calcFineAmount()
{
    return (25 + 10 * (ceil((Car.getNumParkedMinutes()- Meter.getPurchasedParkingMins())/60.0) - 1));
}
string ParkingTicket::print()
{
    ostringstream fineAmountStr;
    fineAmountStr << "  Amount: $" << fineAmount;
    string ticketDescription = "";
    ticketDescription += "\n -------------------------------------\n";
    ticketDescription += " *********** PARKING TICKET **********\n";
    ticketDescription += " -------------------------------------\n";
    ticketDescription += Car.print();
    ticketDescription += "\n -------------------------------------\n";
    ticketDescription += Officer.print();
    ticketDescription += "\n -------------------------------------\n";
    ticketDescription += "               - Fine -              \n\n";
    ticketDescription += fineAmountStr.str();
    ticketDescription += "\n -------------------------------------\n";
    return ticketDescription;
}
