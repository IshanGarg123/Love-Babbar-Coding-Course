#include<iostream>
#include<queue>
#include<map>
using namespace std;

string FirstNonReapeatingChar(string A)
{
    map <char,int> count;
    queue <char> q;
    string ans="";

    for(int i=0;i<A.length();i++)
    {
        char temp = A[i];
        q.push(temp);
        count[temp]++;

        while(!q.empty())
        {
            if(count[q.front()]>1)
            {
                q.pop();
            }
            else
            {
                ans = ans+q.front();
                break;
            }
        }

        if(q.empty())
        {
            ans = ans + '#';
        }
    }
    return ans;
}

int main()
{
    string a = "aabc";
    string b = FirstNonReapeatingChar(a);
    cout << b << endl;

    return 0;
}
