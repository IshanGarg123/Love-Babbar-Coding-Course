#include<iostream>
using namespace std;
#include<stack>

void sortAtPosition(stack<int> stk,int n)
{
    if(stk.empty())
    {
        stk.push(n);
        return;
    }
    if(stk.top()<=n)
    {
        stk.push(n);
        return;
    }
    int temp = stk.top();
    stk.pop();
    sortAtPosition(stk,n);
    stk.push(temp);
}

void sortStack(stack<int> stk)
{
    if(stk.empty())
    {
        return;
    }
    int temp = stk.top();
    stk.pop();
    sortStack(stk);
    sortAtPosition(stk,temp);
}

int main()
{
    return 0;
}