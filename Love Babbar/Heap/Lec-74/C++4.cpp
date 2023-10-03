// priority Queue
// making heap from priority queue

#include<iostream>
#include<queue>
using namespace  std;

int main()
{
    // max heap using stl
    priority_queue <int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(3);
    pq.push(5);

    cout << "top = " << pq.top() << endl;
    pq.pop();
    cout << "top = " << pq.top() << endl;
    cout << "size = " << pq.size() << endl;

    if(pq.empty())
    {
        cout << "pq is empty" << endl;
    }
    else
    {
        cout << "pq is not empty" << endl;
    }

    // MIN HEAP
    priority_queue <int, vector<int> ,greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(3);
    minheap.push(5);

    cout << "top = " << minheap.top() << endl;
    minheap.pop();
    cout << "top = " << minheap.top() << endl;
    cout << "size = " << minheap.size() << endl;

    if(minheap.empty())
    {
        cout << "pq is empty" << endl;
    }
    else
    {
        cout << "pq is not empty" << endl;
    }


    return 0;
}
