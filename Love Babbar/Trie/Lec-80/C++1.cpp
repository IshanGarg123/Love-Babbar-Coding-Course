#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    int len = arr.size();
    int len1 = arr[0].length();
    string ans = "";

    for(int i=0;i<len1;i++)
    {
        char temp = arr[0][i];
        for(int j=1;j<len;j++)
        {

            if(arr[j][i]=='\0'||arr[j][i]!=temp)
            {
                return ans;
            }
        }
        ans = ans + temp;
    }
    return ans;
}

int  main()
{
    cout << "Longest Common prefix without using Trie" << endl;
    return 0;
}