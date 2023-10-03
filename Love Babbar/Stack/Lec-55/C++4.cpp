#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack <int> mystack,int x)
{
    if(mystack.empty())
    {
        mystack.push(x);
        return;
    }
    else
    {
        int temp = mystack.top();
        mystack.pop();
        pushAtBottom(mystack,x);
        mystack.push(temp);
    } 
}

int main()
{
    return 0; 
}