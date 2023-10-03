#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int size;
    int capacity;
    int front;
    int rear;

    CircularQueue(int n)
    {
        arr = new int[n];
        size = 0;
        capacity = n;
        front = -1;
        rear = 0;
    }

    void enqueue(int value)
    {
        if(size == capacity)
        {
            cout << "Queue Full" << endl;
            return;
        }
        if(front == -1)
        {
            front = 0;
        }
        arr[rear] = value;
        rear = (rear+1)%capacity;
        size++;
    }

    int dequeue()
    {
        if(size==0)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        int temp = arr[front];
        front = (front+1)%capacity;
        size--;
        if(size == 0)
        {
            front = -1;
            rear = 0;
        }
        return temp;
    }

    bool isEmpty()
    {
        if(size == 0)
        {
            return true;
        }
        return false; 
    }

    int getsize()
    {
        return size;
    }

    int top()
    {
        if(size==0)
        {
            cout << "queue is Empty" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    return 0;
}