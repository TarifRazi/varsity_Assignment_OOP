#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    std::string name = "Bob";
    int id = 1;
};

int main() {
    Student s1;
    
    cout << "Name of the Student: " << s1.name << endl;
    cout << "ID of the Student: " << s1.id << endl;

    s1.id = 123;
    cout << "ID of the Student: " << s1.id << endl;

    return 0;
}