/*Shape Area Calculator*/
#include <bits/stdc++.h>
using namespace std;

// Abstract Base Class
class Shape {
protected:
    double dimension;

public:

    void setDimension(double d) {
        dimension = d;
    }

    // Pure Virtual Function
    virtual double calculateArea() = 0;
};

// Derived Class: Square
class Square : public Shape {
public:
    double calculateArea() override {
        return dimension * dimension;
    }
};

// Derived Class: Circle
class Circle : public Shape {
public:
    double calculateArea() override {
        return 3.14159 * dimension * dimension;
    }
};

int main() {
    Square sq;
    Circle cir;
    double side, radius;

    // Input and calculation for Square
    cout << "Enter the side length of the square: ";
    cin >> side;
    sq.setDimension(side);
    cout << "Area of Square: " << sq.calculateArea() << endl;

    // Input and calculation for Circle
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cir.setDimension(radius);
    cout << "Area of Circle: " << cir.calculateArea() << endl;

    return 0;
}
