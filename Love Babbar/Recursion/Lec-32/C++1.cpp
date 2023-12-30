// Leet Code 509
// Fibonacci Number
// T.C. = O(N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <vector>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main()
{
    cout << "Fibonacci Number" << endl;
}