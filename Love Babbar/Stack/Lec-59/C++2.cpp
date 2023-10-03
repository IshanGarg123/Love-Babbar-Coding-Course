#include<iostream>
#include<stack>
using namespace std;


class specialStack{
    public:
    stack <int> stk;
    stack <int> stk1;
    int mini;

    void push(int data)
    {
        if(stk.empty())
        {
            stk.push(data);
            stk1.push(data);
            mini = data;
            return;
        }

        stk.push(data);
        if(data < mini)
        {
            mini = data;
        }
        stk1.push(mini);
    }

    int pop()
    {
        if(stk.empty())
        {
            return -1;
        }
        else
        {
            int temp = stk.top();
            stk.pop();
            stk1.pop();
            return temp;
        }
    }

    int top()
    {
        return stk.top();
    }

    bool isEmpty()
    {
        return stk.empty();
    }

    int getMin()
    {
        return stk1.top();
    }
};

int main()
{
    specialStack s1;
    s1.push(5);
    s1.push(3);
    s1.push(8);
    s1.push(2);
    s1.push(4);

    cout << s1.getMin() << endl;
    cout << s1.pop() << endl;
    cout << s1.getMin() << endl;
    cout << s1.pop() << endl;
    cout << s1.getMin() << endl;
    cout << s1.pop() << endl;
    cout << s1.getMin() << endl;
    cout << s1.pop() << endl;
    cout << s1.getMin() << endl;
    cout << s1.pop() << endl;
    return 0;
}