#include<iostream>
using namespace std;

class Stack{
    public:
    int * arr;
    int top;
    int size;

    Stack(int size)
    {
        this -> size = size;
        this -> top = -1;
        this -> arr = new int[5];
    }

    void push(int element)
    {
        if(top>=size-1)
        {
            cout << "Stack OverFlow" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
        }

    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout << "stack UnderFlow" << endl;
        }
    }

    int peek()
    {
        if(top>=0)
        {
            return  arr[top];
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }

    return 0;
}