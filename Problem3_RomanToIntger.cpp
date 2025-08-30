#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> value = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int total = 0;
    for (int i = 0; i < s.size(); i++)
    {
        // If current symbol is smaller than next one, subtract it
        if (i + 1 < s.size() && value[s[i]] < value[s[i + 1]])
        {
            total -= value[s[i]];
        }
        else
        {
            total += value[s[i]];
        }
    }
    return total;
}

int main()
{
    string roman;
    cout << "Enter Roman numeral: ";
    cin >> roman;

    int result = romanToInt(roman);
    cout << "Integer value: " << result << endl;

    return 0;
}
