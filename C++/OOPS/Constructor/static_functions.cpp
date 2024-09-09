#include <iostream>
using namespace std;

class Hero
{

public:
    static int age;

    static int random()
    { // can access static members only.
        return age;
    }
};

int Hero ::age = 25;

int main()
{

    cout << Hero::age << endl;
}
