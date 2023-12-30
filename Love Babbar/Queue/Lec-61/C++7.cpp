#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> interlink(queue <int> q)
{
    int n = q.size();
    int mid = n/2;
    stack <int> s;

    for(int i=0;i<mid;i++)
    {
        s.push(q.front());
        q.pop();
    }
    for(int i=0;i<mid;i++)
    {
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<n-mid;i++)
    {
        q.push(q.front());
        q.pop();
    }
    for(int i=0;i<mid;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
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
    q.push(6);

    q = interlink(q);

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}