// Coding Ninjas
// Subsequences of String
#include <iostream>
using namespace std;
#include <vector>

void solve(string str, int index, vector<string> &ans, string &temp)
{
    if (index == str.length())
    {
        if (temp != "")
        {
            ans.push_back(temp);
        }
        return;
    }

    temp.push_back(str[index]);
    solve(str, index + 1, ans, temp);
    temp.pop_back();
    solve(str, index + 1, ans, temp);
}

vector<string> subsequences(string str)
{
    // Write your code here
    vector<string> ans;
    string temp = "";
    solve(str, 0, ans, temp);
    return ans;
}

int main()
{
    cout << "Subsequences of String" << endl;
}