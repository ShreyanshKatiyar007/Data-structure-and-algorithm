#include <iostream>
using namespace std;

class Hero
{

private:
    int age = 20;

public:
    int health;
    char level;

    int getage()
    {
        return age;
    }

    void setage(int a)
    {
        age = a;
    }
};

int main()
{

    // static allocation
    Hero h1;

    cout << "Size of h1 is:" << sizeof(h1) << endl;
    h1.health = 80;
    h1.level = 'A';
    // cout << "Age:" << h1.getage() << endl;
    h1.setage(21);

    cout << "Age:" << h1.getage() << endl;
    cout << "Health:" << h1.health << endl;
    cout << "Level:" << h1.level;

    // dynamic allocation
    Hero *h2 = new Hero;
    h2->level = 'B';
    h2->setage(27);
    cout << endl;
    cout << "level is:" << (*h2).level << endl;
    cout << "Health is:" << (*h2).getage() << endl;
}
