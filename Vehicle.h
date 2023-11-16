//Vehicle.h
#include <string>
#include <iostream>

class CVehicle{
    private:
        string owner;
    public:
        int numWheels;
    protected:
        string color;
};

CVehicle::CVehicle () {
    owner = "Not Specified";
    numWheels = -1;
    color = "Not Specified";
    cout << "Leaving CVehicle Default Constructor" << endl;
}

CVehicle::CVehicle (string o, int nw, string c) {
    owner = o;
    numWheels = nw;
    color = c;
}

~CVehicle::CVehicle(){
    cout << "CVEHICLE DESTRUCTOR CALLED. Deleting " << owner << "'s " << color << " vehicle\n";
}