/*Vehicle Information System*/
#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    void displayVehicleInfo() {
        cout << "General Vehicle Information System" << endl;
    }
};

class Car : public Vehicle {
private:
    string brand;
    int doors;

public:
    void setCar(string brand, int doors) {
        this->brand = brand;
        this->doors = doors;
    }

    void carInfo() {
        cout << "Car Brand: " << brand << ", Number of Doors: " << doors << endl;
    }
};

class Bus : public Vehicle {
private:
    int routeNumber;
    int capacity;

public:
    void setBus(int routeNumber, int capacity) {
        this->routeNumber = routeNumber;
        this->capacity = capacity;
    }

    void busInfo() {
        cout << "Bus Route Number: " << routeNumber << ", Passenger Capacity: " << capacity << endl;
    }
};

int main() {
    Car myCar;
    myCar.setCar("Toyota", 4);
    myCar.displayVehicleInfo();
    myCar.carInfo();

    cout << endl;

    Bus myBus;
    myBus.setBus(12, 50);
    myBus.displayVehicleInfo();
    myBus.busInfo();

    return 0;
}
