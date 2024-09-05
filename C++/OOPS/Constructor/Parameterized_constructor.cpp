#include <iostream>
using namespace std;

class Hero
{

public:
    int age;

    // parameter constructor
    Hero(int age)
    {
        cout << "this-> address:" << this << endl;
        this->age = age; // pointer to the current object.
    }
};

int main()
{

    Hero h1(10);
    cout << "address of h1 object:" << &h1 << endl;
    cout << h1.age;
}
