#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0); 

    for(int i:s)
    {
        cout << i << " ";
    }
    cout << endl;

    set <int> :: iterator it = s.begin();
    it++;

    s.erase(it); 

    for(int i:s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << s.count(5) << endl;

    cout << s.size() << endl;

    set<int> ::iterator itr = s.find(5);

    cout << "value present at itr = " << *itr << endl;

    cout << *(--s.end()) << endl;

    for(auto i=itr;i!=s.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;







    return 0;
}