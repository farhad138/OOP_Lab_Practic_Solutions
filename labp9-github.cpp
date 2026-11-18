/*Transportation and Fare Management*/
#include <iostream>
using namespace std;

class Vehicle {
public:
    void vehicleInfo() {
        cout << "This is a transport vehicle." << endl;
    }
};

class Fare {
public:
    void fareInfo() {
        cout << "Standard transportation fare applies." << endl;
    }
};

class Car : public Vehicle {
public:
    void carInfo() {
        cout << "Vehicle Category: Private Car" << endl;
    }
};

class Bus : public Vehicle, public Fare {
public:
    void busInfo() {
        cout << "Vehicle Category: Public Bus" << endl;
    }
};

int main() {
    Car c;
    c.vehicleInfo();
    c.carInfo();

    cout << endl;

    Bus b;
    b.vehicleInfo();
    b.fareInfo();
    b.busInfo();

    return 0;
}
