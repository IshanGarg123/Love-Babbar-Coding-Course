#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string s)
{
    stack <char> stk;
    int a;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==')')
        {
            a=0;
            while(stk.top()!='(')
            {
                int temp = stk.top();
                if(temp == '+' || temp == '-' || temp == '*' || temp == '/' || temp == '%')
                {
                    a=1;
                }
                stk.pop();
            }
            if(a==1)
            {
                stk.pop();
            }
            else
            {
                return true;
            }
        }
        else
        {
            stk.push(s[i]);
        }
    }
    return false;

}

int main()
{
    string name = "((a+(b*c)))";
    cout << findRedundantBrackets(name);
    return 0;
}