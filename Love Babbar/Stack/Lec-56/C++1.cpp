#include<iostream>
#include<stack>
using namespace std;

void nextSmallerElement(int arr[],int n,int ans[])
{
    stack <int> stk;
    stk.push(-1);
    for(int i=n-1;i>=0;i--)
    {
        int temp = arr[i];
        while(stk.top()>=temp)
        {
            stk.pop();
        }
        ans[i] = stk.top();
        stk.push(temp);
    }
}

int main()
{
    int arr[4]={2,1,4,3};
    int ans[4];
    nextSmallerElement(arr,4,ans);
    for(int i=0;i<4;i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}