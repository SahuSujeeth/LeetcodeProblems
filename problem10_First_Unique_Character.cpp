#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> freq(26, 0); //  array for a-z

        // Step 1: Count frequency of each character
        for (char c : s)
        {
            freq[c - 'a']++;
        }

        // Step 2: Find the first character with frequency = 1
        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i] - 'a'] == 1)
            {
                return i;
            }
        }

        return -1; // No unique character found
    }
};

int main()
{
    Solution sol;
    string s;
    cin >> s;                             // Input string
    cout << sol.firstUniqChar(s) << endl; // Output result
    return 0;
}
