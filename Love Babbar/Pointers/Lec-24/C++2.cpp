// GFG
// GCD of two numbers
// T.C. = O(log(min(a,b)))  S.C = O(1);

#include <iostream>
using namespace std;
#include <vector>
int gcd(int A, int B)
{
    if (A == 0)
    {
        return B;
    }
    if (B == 0)
    {
        return A;
    }

    if (A == B)
    {
        return A;
    }
    else if (A > B)
    {
        return gcd(A % B, B);
    }
    else
    {
        return gcd(A, B % A);
    }
}

int main()
{
    cout << "GCD of two numbers" << endl;
}