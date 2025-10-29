#include <iostream>

class ImaginaryNumber{
    public:
    int realPart = 0;
    int imaginaryPart = 0;
    void printNumber(){
        std::cout << realPart << " + " << imaginaryPart << "i" << std::endl;
    }
};

int main() {
    ImaginaryNumber num1;
    num1.printNumber();
    std::cout << "1********" << std::endl;
    num1.realPart = 3;
    num1.imaginaryPart = 7;
    num1.printNumber();
    std::cout << "2********" << std::endl;
    ImaginaryNumber num2;
    num2.realPart = 1;
    num2.imaginaryPart = 9;
    num2.printNumber();
    
    return 0;
}