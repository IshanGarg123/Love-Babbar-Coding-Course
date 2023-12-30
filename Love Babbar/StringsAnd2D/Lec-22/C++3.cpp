// check Palindrome
#include<iostream>
using namespace std;

bool checkPalindrome(string s)
{
    // Write your code here.
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] = s[i] -'A' + 'a';
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            continue;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            continue;
        } else {
          s[i] = ' ';
        }
    }

    int i=0;
    int j=s.length()-1;

    while(j>i)
    {
        if(s[i] == ' ')
        {
            i++;
        }
        else if(s[j] == ' ')
        {
            j--;
        }
        else if(s[i]!=' ' && s[j]!=' ')
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    cout << "CheckPalindrome" << endl;
    return 0;
}