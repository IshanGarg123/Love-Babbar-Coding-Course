// remove All adjacent Duplicates in String
// leetcode 1047
#include <iostream>
using namespace std;
#include<stack>

string removeDuplicates(string s)
{
    stack<char> stk;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (stk.empty())
        {
            stk.push(s[i]);
        }
        else
        {
            char temp = s[i];
            if (stk.top() == temp)
            {
                stk.pop();
            }
            else
            {
                stk.push(temp);
            }
        }
    }
    string ans = "";
    while (!stk.empty())
    {
        ans = stk.top() + ans;
        stk.pop();
    }
    return ans;
}

int main()
{
    cout << "remove All adjacent Duplicates in String" << endl;
    return 0;
}