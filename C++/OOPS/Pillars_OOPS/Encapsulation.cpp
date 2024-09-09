#include <iostream>
using namespace std;

class Hero
{

public:
    int age;

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

    Hero h1;
    h1.setage(21);

    cout << "Age:" << h1.getage() << endl;
}
