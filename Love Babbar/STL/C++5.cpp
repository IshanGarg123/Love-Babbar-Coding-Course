#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <string> s;

    s.push("Ishan");
    s.push("Garg");
    s.push("Ram");

    cout << "top " << s.top() << endl;

    s.pop();

    cout << "top " << s.top() << endl;

    s.pop();

    cout << s.empty() << endl;
    return 0;
}