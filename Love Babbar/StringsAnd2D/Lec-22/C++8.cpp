// Remove all Occuring of a Substring
// leetCode 1910
#include <iostream>
using namespace std;

string removeOccurrences(string s, string part)
{

    // s.find(string) = gives the index of the first place of the part
    // in the big string;

    // s.erase(index_no,no of letters to be delete);

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    cout << "Remove all Occuring of a Substring" << endl;
    return 0;
}