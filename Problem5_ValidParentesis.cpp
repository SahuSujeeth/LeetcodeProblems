#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c); // this is for the push opening brackets
            }
            else
            {
                if (st.empty())
                    return false; //  this is no fir the no matching opening
                char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '['))
                {
                    return false; // this is for the  mismatch strings only
                }
                st.pop(); // matched, remove the opening bracket
            }
        }
        return st.empty(); // all brackets matched
    }
};
