// Coding Ninjas
// Count derangements
// BY Recursion
// T.C. = O(2^N) S.C = O(1);

#include<iostream> 
using namespace std;
#include<limits.h>
#include<vector>

long long int countDerangements(int n) {
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }

    return (n-1)*(countDerangements(n-1) + countDerangements(n-2));
}

int main()
{
    cout << "Count derangements" << endl;
}
