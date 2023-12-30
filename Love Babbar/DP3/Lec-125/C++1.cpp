// GFG
// Longest Arithmetic Progression
// Recursion
// T.C. = O(N^3)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int lengthOfLongestAP(int A[], int n) {
        int ans = 1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int diff = A[j]-A[i];
                int lastIndex = i;
                int temp = 2;
                for(int k=i-1;k>=0;k--)
                {
                    if(A[lastIndex] - A[k] == diff)
                    {
                        temp++;
                        lastIndex = k;
                    }
                }
                ans = max(ans,temp);
            }
            
        }
        return ans;
    }

int main()
{
    cout << "Longest Arithmetic Progression" << endl;
}