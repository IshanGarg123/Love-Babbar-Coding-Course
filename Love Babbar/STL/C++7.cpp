#include<queue>
#include<iostream>
using namespace std;

int main()
{
    // max heap;
    priority_queue<int> maxi; 

    // min heap;
    priority_queue<int , vector<int>,greater<int>> mini;

    maxi.push(10);
    maxi.push(20);
    maxi.push(5);
    maxi.push(7);

    int n = maxi.size();

    for(int i=0;i<n;i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(10);
    mini.push(20);
    mini.push(5);
    mini.push(7);

    int n1 = mini.size();

    for(int i=0;i<n1;i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "empty = " << mini.empty() << endl;
    return 0;
}