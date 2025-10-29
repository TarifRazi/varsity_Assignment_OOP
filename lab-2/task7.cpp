#include<iostream>
using namespace std;

class Cat{
    public:
    string color = "White";
    string action = "sitting";

    void printCat(){
        cout<< color<<"cat is "<< action<< endl;
    }

};

int main() {
    Cat c1;
    cout << "===================\n";
    c1.printCat();
    c1.color = "Black";
    cout << "===================\n";
    c1.printCat();
    c1.color = "Brown";
    c1.action = "jumping";
    cout << "===================\n";
    c1.printCat();

    return 0;
}