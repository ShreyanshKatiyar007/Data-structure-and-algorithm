#include <iostream>
using namespace std;

class Hero
{

public:
    int age;
    char Health;

    Hero(int age, char Health)
    {
        this->age = age;
        this->Health = Health;
    }
    Hero(Hero &temp)
    {
        this->Health = temp.Health;
        this->age = temp.age;
    }
    print()
    {
        cout << "Age is:" << this->age << endl;
        cout << "Health is:" << this->Health << endl;
    }
};

int main()
{

    Hero h1(20, 'A');
    h1.print();

    Hero h2(h1);
    h2.print();
}
