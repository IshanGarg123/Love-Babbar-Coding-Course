#include<iostream>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int capacity;
    int front;
    int rear;

    Deque(int n)
    {
        arr = new int[n];
        size = 0;
        capacity = n;
        front = -1;
        rear = 0;
    }

    void pushFront(int x)
    {
        if(size == capacity)
        {
            cout << "queue is Full" << endl;
            return;
        }
        else if(size == 0)
        {
            front = 0;
        }

        else if(front == 0)
        {
            front = capacity - 1;
        }

        else
        {
            front--;
        }
        arr[front] = x;
        size++;
    }

    void pushRear(int x)
    {
        if(size == capacity)
        {
            cout << "Queue is Full" << endl;
            return;
        }
        else if(size == 0)
        {
            front = 0;
        }
        arr[rear] = x;
        rear = (rear+1)%capacity;
        size++;
    }
    
    int popFront()
    {
        if(size == 0)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1; 
        front = (front+1)%capacity;
        size--;

        if(size == 0)
        {
            front = -1;
            rear = 0;
        }
        return ans;
    }

    int popRear()
    {
        if(size == 0)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        if(rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
        int ans = arr[rear];
        arr[rear] = -1;

        size--;

        if(size == 0)
        {
            front = -1;
            rear = 0;
        }
        return ans;
    }

    int getFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }

    }

    int getRear()
    {
        if(!isEmpty())
        {
            if(rear == 0)
            {
                return arr[capacity - 1];
            }
            return arr[rear - 1];
        }
        return -1;
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    bool isFull()
    {
        return (size == capacity);
    }

    int getSize()
    {
        return size;
    }

};

int main()
{
    return 0;
}