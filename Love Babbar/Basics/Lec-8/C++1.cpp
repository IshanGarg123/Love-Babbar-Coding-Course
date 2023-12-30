#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    char opt;
    cin >> opt;

    switch(opt)
    {
        case '+': cout << a+b << endl;
        break;

        case '-': cout << a-b << endl;
        break;

        case '*': cout << a*b << endl;
        break;

        case '/': cout << a/b << endl;
        break;

        case '%': cout << a%b << endl;
        break;
    }
    return 0;
}