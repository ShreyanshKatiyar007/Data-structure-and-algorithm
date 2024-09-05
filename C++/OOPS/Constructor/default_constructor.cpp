#include <iostream>
using namespace std;

class Hero
{

public:
    int age;

    // default constructor
    Hero()
    {
        cout << "constructor call" << endl;
    }
};

int main()
{

    Hero h1;
}
