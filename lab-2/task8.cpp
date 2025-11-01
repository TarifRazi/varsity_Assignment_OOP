#include<iostream>
using namespace std;

class Bird {
public:
    string name;
    int position = 0;

    void flyUp(int feet) {
        position += feet;
        cout << name << " has flown up " << feet << " feet." << endl;
    }

    void flyDown(int feet) {
        if (feet > position) {
            cout << name << " cannot fly down " << feet << " feet." << endl;
        } else {
            position -= feet;
            cout << name << " has flown down " << feet << " feet";
            if (position == 0)
                cout << " and landed.";
            cout << endl;
        }
    }

    void makeNoise() {
        if (name == "Parrot")
            cout << "Squawk" << endl;
        else if (name == "Eagle")
            cout << "Squee" << endl;
    }
};


int main() {
    Bird b1;
    b1.name = "Parrot";
    b1.flyUp(3);
    b1.makeNoise();
    b1.flyDown(5);
    b1.flyDown(2);
    b1.flyDown(1);
    Bird b2;
    b2.name = "Eagle";
    b2.flyUp(5);
    b2.flyDown(5);
    b2.makeNoise();

    return 0;
}