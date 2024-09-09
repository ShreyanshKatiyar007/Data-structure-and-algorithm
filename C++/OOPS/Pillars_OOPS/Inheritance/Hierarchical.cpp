#include <iostream>
using namespace std;

class A
{

public:
    void func1()
    {
        cout << "Inside Class A" << endl;
    }
};

class B : public A
{

public:
    void func2()
    {
        cout << "Inside Class B" << endl;
    }
};

class C : public A
{

public:
    void func3()
    {
        cout << "Inside Class C" << endl;
    }
};

int main()
{

    A objA;
    objA.func1();

    B objB;
    objB.func1();
    objB.func2();

    C objC;
    objC.func1();
    objC.func3();
}
