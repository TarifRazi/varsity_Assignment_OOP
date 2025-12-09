#include <iostream>
using namespace std;
class Human {
public:
int age;
double height;
};

int main() {
    Human* h1 = new Human();
    Human* h2 = new Human();
    h1->age = 21;
    h1->height = 5.5;
    cout << h1->age << endl;
    cout << h1->height << endl;
    h2->height = h1->height - 3;
    cout << h2->height << endl;
    h2->age = h1->age++;
    cout << h1->age << endl;
    h2 = h1;
    cout << h2->age << endl;
    cout << h2->height << endl;
    h2->age++;
    h2->height++;
    cout << h1->age << endl;
    cout << h1->height << endl;
    h1->age = ++h2->age;
    cout << h2->age << endl;
    cout << h2->height << endl;
    delete h1;
    delete h2;

return 0;
}