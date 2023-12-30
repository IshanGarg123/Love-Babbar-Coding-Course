// Check Palindrome
#include<iostream>
using namespace std;

bool Palindrome(string &s,int i,int j)
{
    if(i==j || i>j)
    {
        return true;
    }
    if(s[i]!=s[j])
    {
        return false;
    }
    return Palindrome(s,i+1,j-1);
}

int main()
{
    string str="ishanahsi";
    cout << Palindrome(str,0,8)<< endl;
    return 0;
}