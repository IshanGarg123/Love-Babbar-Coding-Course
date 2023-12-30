#include<iostream>
#include<queue>
using namespace std;

queue<int> interlink(queue <int> q)
{
    int n = q.size();
    queue <int> temp;
    int mid = n/2;

    for(int i=0;i<mid;i++)
    {
        temp.push(q.front());
        q.pop();
    }

    while(!temp.empty())
    {
        q.push(temp.front());
        temp.pop();
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