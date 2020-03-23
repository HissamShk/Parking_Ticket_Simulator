#ifndef PARKINGMETER_H
#define PARKINGMETER_H
#include <string>
using namespace std;
class ParkingMeter
{
    public:
        /*Default Constructors*/
        ParkingMeter();
        /*Constructor with Parameters*/
        ParkingMeter(int purchasedMinutes);
        /*Function to retrieve the value stored in purchasedParkingMins*/
        int getPurchasedParkingMins() const;
        /*Function to display the values in all Private Variables*/
        string print();
    private:
        /*Stores the Number of Minutes the Car Owner has paid for*/
        int purchasedParkingMins;
};
#endif // PARKINGMETER_H
