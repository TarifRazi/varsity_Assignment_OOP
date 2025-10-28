#include <iostream>
#include <string>

using namespace std;

class Vehicle{
public:
    string type = "Car";
    int wheels = 4;
    string color = "White";
};


int main() {
    Vehicle car;
    cout << "Attributes of car object:" << endl;
    cout << car.type << endl;
    cout << car.wheels << endl;
    cout << car.color << endl;
    cout << "=========" << endl;

    Vehicle bike;
    bike.type = "Motor bike";
    bike.wheels = 2;
    bike.color = "Red";
    cout << "Attributes of bike object:" << endl;
    cout << bike.type << endl;
    cout << bike.wheels << endl;
    cout << bike.color << endl;
return 0;
}