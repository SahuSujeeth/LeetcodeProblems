#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    long long reversed = 0;
    int original = x;

    while (x > 0)
    {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return original == reversed;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}
