#include <iostream>
using namespace std;

class Hero
{
public:
    static int age;
};

int Hero ::age = 25;

int main()
{

    // no need of object to call static keywords.
    cout << Hero::age << endl;
}
