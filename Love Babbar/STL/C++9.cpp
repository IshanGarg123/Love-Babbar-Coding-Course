#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1]="Ishan";
    m[2]="Garg";
    m[13]="Kumar";
    m.insert({5,"bheem"});

    for(auto i:m)
    {
        cout << i.first <<" " ;
        cout << i.second;
        cout << endl;
    }

    cout << m.count(13) << endl;

    cout << "Before Erase" << endl;

    for(auto i:m)
    {
        cout << i.first <<" " ; 
        cout << i.second;
        cout << endl;
    }

    cout << "After Erase" << endl;

    m.erase(13);

    for(auto i:m)
    {
        cout << i.first << " ";
        cout << i.second << endl;
    }
    cout << endl;

    auto it = m.find(5);

    for(auto i=it;i!=m.end();i++)
    {
        cout << (*i).first << endl;
    }

    cout << endl;

    return 0;
}