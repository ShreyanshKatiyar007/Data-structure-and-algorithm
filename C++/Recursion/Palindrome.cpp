#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }

    if (str[i] == str[j])
    {
        i++;
        j--;
    }
    else
    {
        return false;
    }
    checkPalindrome(str, i, j);
}
int main()
{

    string name = "boobs";

    bool ans = checkPalindrome(name, 0, name.length() - 1);

    if (ans)
    {
        cout << "It is a Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
}
