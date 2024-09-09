#include <iostream>
using namespace std;

class Human
{

public:
    int height;
    int weight;
    int age;
};

class Male : public Human
{

public:
    string color;

    void random()
    {
        cout << "Inheritance done" << endl;
    }
};

int main()
{

    Male Obj1;
    cout << Obj1.age << endl;
    cout << Obj1.weight << endl;
    cout << Obj1.height << endl;
    cout << Obj1.color << endl;

    Obj1.weight = 70;
    cout << Obj1.weight << endl;
    Obj1.random();
}
