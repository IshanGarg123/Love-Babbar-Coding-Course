// reverse a String
// leet code question 344

#include<iostream>
#include<vector>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[])
{
    int len = getLength(name);
    int i = 0;
    int j = len - 1;

    while (j > i)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

void reverseString(vector<char> &s)
{
    int len = s.size();
    int i = 0;
    int j = len - 1;

    while (j > i)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main()
{
    char name[10];
    cin >> name;

    reverse(name);
    cout << name << endl;
    return 0;
}