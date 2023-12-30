#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> l;

    list <int> l1(l);

    list <int> n(5,100);

    for(int i:n)
    {
        cout << i << " ";
    }

    cout << endl;

    l.push_back(2);
    l.push_front(1);

    for(int i:l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());

    for(int i:l)
    {
        cout << i << " ";
    }

    cout << "size of list" << l.size() << endl;
    return 0;
}