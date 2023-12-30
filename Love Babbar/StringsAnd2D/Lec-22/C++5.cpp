// Reverse Word in a String 
// leetCode 151
#include<iostream>
using namespace std;

// Solution in Java

/*
class Solution {
    public String reverseWords(String s) {
        String[] arr = s.trim().split(" ");
        String ans = "";

        for(int i=arr.length-1;i>=0;i--)
        {
            if(arr[i] == "")
            {
                continue;
            }
            if(i!=0)
            {
                ans = ans + arr[i] + " ";
            }
            else
            {
                ans = ans + arr[i];
            }
        }        
        return ans;

    }
}
*/

int main()
{
    cout << "Reverse word in a String" << endl;
    return 0;
}