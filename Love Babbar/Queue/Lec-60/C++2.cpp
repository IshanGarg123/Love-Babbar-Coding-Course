#include<iostream>
using namespace std;

class queue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    queue()
    {
        size = 100;
        front = 0;
        rear = 0;
        arr = new int[100];
    }

    void enqueue(int data)
    {
        if(rear==size)
        {
            cout << "queue is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if(front == rear)
        {
            return -1;
        }
        else
        {
            int temp = arr[front];
            arr[front] = -1;
            front++;
            if(front==rear)
            {
                front = 0;
                rear = 0;
            }
            return temp;
        }

    }

    bool isEmpty()
    {
        if(front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int qfront()
    {
        if(front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int qsize()
    {
        return (rear-front);  
    }
};

int main()
{
    return 0;
}