#include <iostream>
#include <string>
using namespace std;   // <-- you forgot this line

class University {
public:
    string name;
    string location;
};

int main() {

    University uniA;
    University uniB;

    cout<<"Location of uniA"<<&uniA<<endl;
    cout<<"Location of uniB"<<&uniB<<endl;

    if (&uniA==&uniB){
        cout<<"Same Location"<<endl;
    }
    else{
        cout<<"Different Location"<<endl;
    };

    uniA.name="Imperial College London";
    uniA.location="London";

    uniB.name="Brac University";
    uniB.location="Bangladesh";

    cout<<"After assign vales:"<<endl;
    cout<<"University A: "<<uniA.name<<", Country: "<<uniA.location<<endl;
    cout<<"University B: "<<uniB.name<<", Country: "<<uniB.location<<endl;

    if (uniA.name==uniB.name && uniA.location==uniB.location)
    {
        cout<<"Same Value"<<endl;
    }
    else{
        cout<<"Different Value"<<endl;
    }
    
    

    return 0;
}
