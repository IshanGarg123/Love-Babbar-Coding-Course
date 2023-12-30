#include<iostream>
using namespace std;
#include<deque>

int main()
{
    deque <int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i=0;i<d.size();i++)
    {
        cout << d[i] << " ";
    }

    cout << endl;

    d.pop_back();

    for(int i=0;i<d.size();i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    d.push_back(1);

    d.pop_front();

    for(int i=0;i<d.size();i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    cout << "first element" << d.at(0) << endl;

    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    cout << d.front() << endl;
    cout << d.back() << endl;
    cout << d.empty() << endl;

    for(int i=0;i<d.size();i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    d.erase(d.begin()+3);  

    for(int i=0;i<d.size();i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    d.erase(d.begin(),d.begin()+2);

    for(int i=0;i<d.size();i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;













    return 0;
}