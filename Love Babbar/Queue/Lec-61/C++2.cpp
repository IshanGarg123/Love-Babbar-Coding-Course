#include<iostream>
#include<queue>
using namespace std;

void printFirstNegativeInteger(int arr[],int n,int k,int ans[])
{
    queue <int> q;
    int index = 0;

    for(int i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
            q.push(i);
        }
    }

    if(q.empty())
    {
        ans[index] = 0;
    }
    else
    {
        ans[index] = arr[q.front()];
    }
    index++;

    for(int i=k;i<n;i++)
    {
        if(!q.empty() && q.front()<=i-k)
        {
            q.pop();
        }

        if(arr[i]<0)
        {
            q.push(i);
        }

        if(q.empty())
        {
            ans[index] = 0;
        }
        else
        {
            ans[index] = arr[q.front()];
        }
        index++;
    }
}


int main()
{
    int arr1[] = {-8,2,3,-6,10};
    int arr2[4];
    printFirstNegativeInteger(arr1,5,2,arr2);

    for(int i=0;i<4;i++)
    {
        cout << arr2[i] << " ";
    } 
    return 0;
}