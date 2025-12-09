#include <iostream>
#include <string>
using namespace std;

class CellPhone {
private:
    string model;
    string contacts[3];
    int contactCount;

public:
    CellPhone() {
        model = "unknown";
        contactCount = 0;
    }

    void storeContact(string contact) {
        if (contactCount < 3) {
            contacts[contactCount] = contact;
            contactCount++;

            if (model == "unknown") {
                model = "Nokia 1100";
            }

            cout << "Contact Stored" << endl;
        } else {
            cout << "Memory full. New contact can't be stored." << endl;
        }
    }

    void printDetails() {
        cout << "Phone Model " << model << endl;
        cout << "Contacts Stored " << contactCount << endl;

        if (contactCount > 0) {
            cout << "Stored Contacts:" << endl;
            for (int i = 0; i < contactCount; i++) {
                cout << contacts[i] << endl;
            }
        }
    }
};

int main() {
    CellPhone phone1;
    phone1.printDetails();
    cout << "1##################" << endl;

    phone1.storeContact("Joy - 01834");
    cout << "===================" << endl;
    phone1.printDetails();

    cout << "2##################" << endl;
    phone1.storeContact("Toya - 01334");
    phone1.storeContact("Aayan - 01135");
    cout << "===================" << endl;
    phone1.printDetails();

    cout << "3##################" << endl;
    phone1.storeContact("Sani - 01441");
    cout << "===================" << endl;
    phone1.printDetails();

    return 0;
}
