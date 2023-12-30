// Conding Ninjas
// Modular Exponentiation
// T.C. = O(logN)  S.C = O(1);

#include <iostream>
using namespace std;
#include <vector>

long long solve(long long x, int n, int m)
{
    if (n == 0)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return solve((x * x) % m, n / 2, m);
    }
    else
    {
        return solve((x * x) % m, n / 2, m) * (x) % m;
    }
}

int modularExponentiation(int x, int n, int m)
{
    long long ans = solve(x, n, m);
    return (ans % m);
}
int main()
{
    cout << "Modular Exponentiation" << endl;
}