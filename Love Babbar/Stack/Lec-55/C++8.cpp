#include<iostream>
#include<stack>
using namespace std;

int findMinCostString(string s)
{
    if(s.length()%2 == 1)
    {
        return -1;
    }

    stack <char> stk;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='{')
        {
            stk.push('{');
        }
        else
        {
            if(!stk.empty())
            {
                if(stk.top()=='{')
                {
                    stk.pop();
                }
                else
                {
                    stk.push('}');
                }
            }
            else
            {
                stk.push('}');
            }
        }
    }

    int a=0;
    int b=0;

    while(!stk.empty())
    {
        if(stk.top() == '{')
        {
            a++;
        }
        else
        {
            b++;
        }
        stk.pop();
    }

    int ans = (a+1)/2 +(b+1)/2;
    return ans;
}

int main()
{
    string s = "{}{{{{";
    cout << findMinCostString(s) << endl;
    return 0;
}