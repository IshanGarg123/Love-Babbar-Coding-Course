#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <string> q;
    q.push("Ishan");
    q.push("Garg");
    q.push("Kumar");

    cout << "first = " << q.front() << endl;

    q.pop();

    cout << "first = " << q.front() << endl;

    cout << "size = " << q.size() << endl;
    
}