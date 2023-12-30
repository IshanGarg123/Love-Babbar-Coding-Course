#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "size of queue is : " << q.size() << endl;

    cout << q.front() << endl;
    q.pop();

    cout << q.front() << endl;

    cout << "size of queue is : " << q.size() << endl;

    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    cout << "size of queue is : " << q.size() << endl;

    if(q.empty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is Not Empty" << endl;
    }
    return 0;
}