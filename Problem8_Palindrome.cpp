#include <iostream>
using namespace std;
int Palindrome(int x)
{
    if (x < 0)
    {
        cout << "false";
        return 0;
    }
    int reverse = 0;
    int dup = x;
    while (x > 0)
    {
        int ld = x % 10;
        reverse = reverse * 10 + ld;
        x = x / 10;
    }
    if (reverse == dup)
        cout << "true" << endl;
    else
        cout << "false";
}

int main() 
{
    int n;
    cin >> n;
    int result = Palindrome(n);

    return 0;
}