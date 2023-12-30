// reverse a string using Rcursion
#include<iostream>
using namespace std;

void reverseString(string &s,int i,int j)
{
    if(i==j || i>j)
    {
        return;
    }
    swap(s[i],s[j]);
    reverseString(s,i+1,j-1);
}

int main()
{
    string str="ishangarg";
    reverseString(str,0,8);
    cout << str << endl;

    return 0;
}