#include <iostream>
using namespace std;

int main()
{

    char name[20];

    cout << "Enter your name:" << endl;
    cin >> name;
    // name[2] = '\0';   //it will return first 2 indeces(0,1).

    cout << "Your name is:";
    cout << name;
}
