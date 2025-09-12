// This is the problem about to the find the nth term of the fibonaccii digit of the n given numberr...
#include <bits/stdc++.h>
using namespace std;
int Fibonaci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return Fibonaci(n - 1) + Fibonaci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << Fibonaci(n);

    return 0;
}