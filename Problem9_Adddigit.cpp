#include <iostream>
using namespace std;

int addDigits(int num)
{
    if (num == 0)
        return 0;
    return 1 + (num - 1) % 9;
}

int main()
{

    int num1 = 38;
    cout << "Input: " << num1 << " -> Output: " << addDigits(num1) << endl;

    int num2 = 0;
    cout << "Input: " << num2 << " -> Output: " << addDigits(num2) << endl;

    int num3 = 99;
    cout << "Input: " << num3 << " -> Output: " << addDigits(num3) << endl;

    return 0;
}
