#include<iostream>
#include<stack>
using namespace std;

  
void solve(stack<int>&inputStack,int count,int size)
{
    if(count == size/2)
    {
        inputStack.pop();
        return;
    }
    else
    {
        int ans = inputStack.top();
        inputStack.pop();
        count++;
        solve(inputStack,count,size);
        inputStack.push(ans);
    }
}

void deleteMiddle(stack<int>&inputStack,int N)
{
    int count = 0;
    solve(inputStack,count,N);
}

int main()
{
    return 0;
}
