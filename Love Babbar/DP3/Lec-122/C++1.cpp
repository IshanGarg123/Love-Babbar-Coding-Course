// GFG
// Dice throw
// Recursion
// T.C. = O(M^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

 long long noOfWays(int M , int N , int X) {
        // code here
        if(X<0)
        {
            return 0;
        }
        if(N!=0 && X==0)
        {
            return 0;
        }
        if(X!=0 && N==0)
        {
            return 0;
        }
        if(X==0 && N==0)
        {
            return 1;
        }
        
        long long ans = 0;
        
        for(int i=1;i<=M;i++)
        {
            ans += noOfWays(M,N-1,X-i);
        }
        return ans;
    }

int main()
{
    cout << "Dice throw" << endl;
}