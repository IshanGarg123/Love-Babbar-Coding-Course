#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue <int> rev(queue <int> q)
{
    stack <int> s;
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    while(!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    return q;
}

int main()
{
    queue <int> q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);

    q = rev(q);

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}