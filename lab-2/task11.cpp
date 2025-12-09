#include <iostream>
using namespace std;
class Student {
public:
string name;
double cgpa;
};

int main() {
Student s1;
Student s2;
Student* s3 = nullptr;
s1.name = "Student One";
s1.cgpa = 2.3;
s3 = &s1;
s2.name = "Student Two";
s2.cgpa = s3->cgpa + 1;
s3->name = "New Student";
cout << s1.name << endl;
cout << s2.name << endl;
cout << s3->name << endl;
cout << s1.cgpa << endl;
cout << s2.cgpa << endl;
cout << s3->cgpa << endl;
s3 = &s2;
s1.name = "old student";
s2.name = "older student";
s3->name = "oldest student";
s2.cgpa = s1.cgpa - s3->cgpa + 4.5;
cout << s1.name << endl;
cout << s2.name << endl;
cout << s3->name << endl;
cout << s1.cgpa << endl;
cout << s2.cgpa << endl;
cout << s3->cgpa << endl;
return 0;
}

