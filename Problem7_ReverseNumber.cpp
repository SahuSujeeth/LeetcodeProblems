#include <iostream>
#include <climits>
using namespace std;
int reverse(int x)
{

    long long reverse = 0;
    while (x != 0)
    {
        int ld = x % 10;
        reverse = (reverse * 10) + ld;

        if (reverse > INT_MAX || reverse < INT_MIN)
            return 0;
        x = x / 10;
    }
    // INT_MAX=2147483647
    // INT_MIN=-2147483648

    return reverse;
}

int main()
{
    long long x;
    cin >> x;
    cout << reverse(x);

    return 0;
}