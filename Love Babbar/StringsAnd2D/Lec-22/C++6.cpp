// Max Occuring Char in a String
#include <iostream>
using namespace std;
#include<map>

char getMaxOccuringChar(string str)
{
    // Your code here
    map<char, int> count;

    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    char ans = ' ';
    char freq = -1;

    for (auto i : count)
    {
        if (i.second > freq)
        {
            freq = i.second;
            ans = i.first;
        }
    }
    return ans;
}

int main()
{
    cout << "Max Occuring Char in a String" << endl;
    return 0;
}