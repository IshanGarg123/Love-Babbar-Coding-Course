#include<iostream>
#include<stack>
using namespace std;

int celebrity(int arr[][3],int n)
{
    stack <int> stk;
    for(int i=0;i<n;i++)
    {
        stk.push(i);
    }

    while(stk.size()!=1)
    {
        int a = stk.top();
        stk.pop();
        int b = stk.top();
        stk.pop();
        if(arr[a][b]==1)
        {
            stk.push(b);
        }
        else if(arr[b][a]==1)
        {
            stk.push(a);
        }
    }

    int temp = stk.top();
    int x = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[temp][i]!=0)
        {
            x=1;
            break;
        }
        if(arr[i][temp]==0)
        {
            if(i==temp)
            {
                continue;
            }
            else
            {
                x=1;
                break;
            }
        }
    }
    if(x==0)
    {
        return temp;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[3][3] ={{0,1,0},{0,1,0},{0,1,0}};
    cout << celebrity(arr,3);
    return 0;
}