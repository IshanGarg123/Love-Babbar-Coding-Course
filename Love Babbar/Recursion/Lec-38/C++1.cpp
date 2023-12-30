// Coding Ninjas
// Letter Combinations of a Phone Number
#include <iostream>
using namespace std;
#include <vector>

void solve(string &s, string arr[], int index, vector<string> &ans, string &temp)
{
    if (index == s.length())
    {
        ans.push_back(temp);
        return;
    }

    int num = s[index] - '0';
    for (int i = 0; i < arr[num].length(); i++)
    {
        temp.push_back(arr[num][i]);
        solve(s, arr, index + 1, ans, temp);
        temp.pop_back();
    }
}

vector<string> combinations(string s)
{
    string arr[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    string temp = "";
    solve(s, arr, 0, ans, temp);
    return ans;
}

int main()
{
    cout << "Letter Combinations of a Phone Number" << endl;
}