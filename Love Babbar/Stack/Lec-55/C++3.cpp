#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(string str)
{
    stack <char> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' || str[i]=='(' || str[i]=='[')
        {
            s.push(str[i]);
        }
        else
        {
            if(!s.empty())
            {
                char top = s.top();
                if(top == '{' && str[i] == '}')
                {
                    s.pop();
                }
                else if(top == '[' && str[i] == ']')
                {
                    s.pop();
                }
                else if(top == '(' && str[i] == ')')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str = "{[](){(){}}";
    cout << isValidParenthesis(str) << endl;
    return 0;   
}