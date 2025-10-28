#include <iostream>
#include<cmath>
using namespace std;


class Circle {
public:
    double radius=5;
};

int main(){
    Circle circle;

    double area = M_PI*circle.radius*circle.radius;
    double circumference = 2*M_PI*circle.radius;

    cout <<"Redius of the circle is  "<<circle.radius<< endl;
    cout<<"The area of the circle is "<<area<<endl;
    cout<<"The circumference of the circle is "<<circumference<<endl;

    return 0;
}