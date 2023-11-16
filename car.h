//car.h

#include <Vehicle.h>
#include <string>
#include <iostream>

class CCar: public CVehicle {
    public:
        string engine;
};

CCar::CCar (int nw, string e, string c){
    numWheels = nw;
    engine = e;
    color = c;
}