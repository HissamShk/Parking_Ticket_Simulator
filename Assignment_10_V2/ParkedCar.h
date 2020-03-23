#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include <string>
using namespace std;
class ParkedCar
{
    public:
        /*Default Constructor*/
        ParkedCar();
        /*Constructor with Parameters*/
        ParkedCar(string cMake, string cModel, string cColor, string cLicenseNum, int cNumMinParked);
        /*Function to retrieve the information in numMinutesParked*/
        int getNumParkedMinutes() const;
        /*Function to display the values in all Private Variables*/
        string print();
    private:
        /*Stores the Make of the Car*/
        string carMake;
        /*Stores the Model of the Car*/
        string carModel;
        /*Stores the Color of the Car*/
        string carColor;
        /*Stores the License Number of the Car*/
        string carLicenseNum;
        /*Stores the Number of Minutes that the Car has been parked for*/
        int numMinutesParked;
};
#endif // PARKEDCAR_H
