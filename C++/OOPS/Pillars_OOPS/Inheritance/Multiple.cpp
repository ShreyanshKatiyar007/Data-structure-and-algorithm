#include <iostream>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

class Dog : public Animal
{
};

class GermanShepherd : public Dog
{
};

int main()
{

    GermanShepherd G;
    cout << G.age << endl;
    G.bark();
}
