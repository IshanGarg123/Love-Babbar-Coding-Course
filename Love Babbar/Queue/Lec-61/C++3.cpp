#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue <int> modifyQueue(queue <int> q,int k)
{
    int n = q.size();
    stack <int> s;
    for(int i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();
    }
    for(int i=0;i<k;i++)
    {
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<n-k;i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    return q;
}

int main()
{
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q = modifyQueue(q,3);

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}