// Permutation in Strings
// Leetcode 567
#include<iostream>
using namespace std;

    bool isEqual(int arr1[],int arr2[])
    {
        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int arr[26] = {0};

        for(int i=0;i<s1.length();i++)
        {
            int index = s1[i]-'a';
            arr[index]++;
        }

        int i=0;
        int windowSize = s1.length();

        int temp[26] = {0};

        while(i<windowSize && i<s2.size())
        {
            int index = s2[i]-'a';
            temp[index]++;
            i++;
        }

        if(isEqual(arr,temp))
        {
            return true;
        }

        for(int j=i;j<s2.size();j++)
        {
            int newIndex = s2[j]-'a';
            temp[newIndex]++;

            int oldIndex = s2[j-windowSize] - 'a';
            temp[oldIndex]--;

            if(isEqual(arr,temp))
            {
                return true;
            }
        }
        return false;
    }

int main()
{
    cout << "Permutation in Strings" << endl;
    return 0;
}