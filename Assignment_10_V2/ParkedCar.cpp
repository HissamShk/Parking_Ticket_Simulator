#include "ParkedCar.h"
using namespace std;
ParkedCar::ParkedCar()
{
    carMake = "";
    carModel = "";
    carColor = "";
    carLicenseNum = "";
    numMinutesParked = 0;
}
ParkedCar::ParkedCar(string cMake, string cModel, string cColor, string cLicenseNum, int cNumMinParked)
{
    carMake = cMake;
    carModel = cModel;
    carColor = cColor;
    carLicenseNum = cLicenseNum;
    numMinutesParked = cNumMinParked;
}
int ParkedCar::getNumParkedMinutes() const
{
    return numMinutesParked;
}
string ParkedCar:: print()
{
    string carDescription = "               - Car -               \n";
    carDescription += "  Make: " + carMake;
    carDescription += "\n  Model: " + carModel;
    carDescription += "\n  Color: " + carColor;
    carDescription += "\n  License Number: " + carLicenseNum;
    return carDescription;
}
