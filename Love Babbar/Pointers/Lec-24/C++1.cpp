// Leet Code 204
// Count Primes
// T.C. = O(N*log(logN))  S.C = O(N);

#include <iostream>
using namespace std;
#include<vector>

int countPrimes(int n)
{
    vector<bool> isPrime(n + 1, true);
    int ans = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            ans++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    return ans;
}

int main()
{
    cout << "Count Primes" << endl;
}