#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include <string>
using namespace std;
class ParkingTicket
{
    public:
        /*Constructor with Parameters*/
        ParkingTicket(ParkedCar &carT, ParkingMeter &meterT, PoliceOfficer &officerT);
        /*Function to retrieve the calculated value of the Fine issued */
        int calcFineAmount();
        /*Function to display the values in all Private Variables*/
        string print();
    private:
        /*Object to access the class ParkedCar*/
        ParkedCar Car;
        /*Object to access the class ParkingMeter*/
        ParkingMeter Meter;
        /*Object to access the class PoliceOfficer*/
        PoliceOfficer Officer;
        /*Stores The Amount of Fine issued to the Car Owner*/
        int fineAmount;
};
#endif // PARKINGTICKET_H
