#include<iostream>
#include<stack>
using namespace std;

class SpecialStack{
    public:
    stack <int> stk;
    int mini;

    void push(int data)
    {
        if(stk.empty())
        {
            stk.push(data);
            mini = data;
        }
        else
        {
            if(data < mini)
            {
                int val = 2*data - mini;
                mini = data;
                stk.push(val);
            }
            else
            {
                stk.push(data);
            }

        }

    }

    int pop()
    {
        if(stk.empty())
        {
            cout << "stack Empty" << endl;
            return -1;
        }

        int curr = stk.top();
        stk.pop();

        if(curr > mini)
        {
            return curr;
        }
        else
        {
            int prevMini = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMini;
        }

    }

    int top()
    {
        if(stk.empty())
        {
            return -1;
        }

        int curr = stk.top();
        if(curr < mini)
        {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    bool isEmpty()
    {
        return stk.empty();
    }

    int getMin()
    {
        if(stk.empty())
        {
            return -1;
        }
        return mini;
    }


    
};

int main()
{  
    return 0;
}