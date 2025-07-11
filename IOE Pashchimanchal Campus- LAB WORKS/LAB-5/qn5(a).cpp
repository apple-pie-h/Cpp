//constructors and destructors
//single inheritance

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor called." << endl;
    }
    ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }
    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    cout << "Single Inheritance:" << endl;
    Derived d;
    return 0;
}

