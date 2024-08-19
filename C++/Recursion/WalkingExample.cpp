#include <iostream>
using namespace std;

void ReachHome(int dest, int src)
{

    if (src == dest)
    {
        cout << "IN HOME" << endl;
        return;
    }
    src++;
    ReachHome(dest, src);
}
int main()
{

    int dest = 50;
    int src = 0;

    ReachHome(dest, src);
}
