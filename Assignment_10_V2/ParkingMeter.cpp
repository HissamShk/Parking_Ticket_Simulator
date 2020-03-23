#include "ParkingMeter.h"
#include <string>
using namespace std;
ParkingMeter::ParkingMeter()
{
    purchasedParkingMins = 0;
}
ParkingMeter::ParkingMeter(int purchasedMinutes)
{
    purchasedParkingMins = purchasedMinutes;
}
int ParkingMeter::getPurchasedParkingMins() const
{
    return purchasedParkingMins;
}
string ParkingMeter::print()
{
    return "ParkingMeter print()";
}
