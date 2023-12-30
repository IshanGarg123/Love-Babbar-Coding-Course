#include<iostream>
#include<queue>
using namespace std;

int main()
{
    deque <int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    d.pop_front();
    
    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();

    if(d.empty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }
    return 0;
}