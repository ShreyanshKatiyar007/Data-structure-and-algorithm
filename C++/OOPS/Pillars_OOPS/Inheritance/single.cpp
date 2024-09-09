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

int main()
{

    Dog D;
    cout << D.age << endl;
    D.bark();
}
