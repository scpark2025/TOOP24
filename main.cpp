//Sydney Park
//TOOP24 in-class exercise
//Destructors

#include "vehicle.h"
//#include "car.h"

int main()
{
    cout << "Starting main Program\n";
    //instantiate a CVehicle
    CVehicle randomVehicle("Alfa",4,"Blue");

    //Delete for part 6
    //Now let's explore inheritance a little... even though either CCar has owner, numWheels, or color they INHERIT from CVehicle!
    //CCar Volt(4,"Bronze","4 Cylinder");
    //CCar Sienna(4,"Green","V6");

    cout << "Leaving main Program\n";
    return 0;
}
