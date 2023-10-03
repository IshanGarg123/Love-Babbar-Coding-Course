#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class KQueue
{
    public:
    int n;
    int k;
    int* arr;
    int* front;
    int* rear;
    int* next;
    int freespot;

    KQueue(int N,int K)
    {
        n=N;
        k=K;
        front = new int[k];
        rear = new int[k];

        for(int i=0;i<k;i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for(int i=0;i<n;i++)
        {
            next[i] = i+1;
        }
        next[n-1] = -1;

        arr = new int[n];

        freespot = 0;
    }

    void enqueue(int qn,int data)
    {
        if(freespot == -1)
        {
            cout << "Queue is Full" << endl;
            return;
        }

        int index = freespot;

        freespot = next[freespot];

        next[index] = -1;

        if(front[qn-1] == -1)
        {
            front[qn-1] = index;
        }
        else
        {
            next[rear[qn-1]] = index;
        }

        rear[qn-1] = index;
        arr[index] = data;
    }

    int dequeue(int qn)
    {
        if(front[qn-1] == -1)
        {
            cout << "queue is Empty" << endl;
            return -1;
        }

        int index = front[qn-1];
        front[qn-1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};

int main()
{
    KQueue q(10,3);
    q.enqueue(1,10);
    q.enqueue(1,15);
    q.enqueue(2,20);
    q.enqueue(1,25);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    return 0;
}
