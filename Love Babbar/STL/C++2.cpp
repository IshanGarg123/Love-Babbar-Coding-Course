#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;

    vector <int> a(5,1);

    vector <int> b(a);
     
    // it means a vector a is made with size = 5;
    // all elements in it is 1;
    // {1,1,1,1,1} like this; 
    cout << "Capacity = " << v.capacity() << endl;

    v.push_back(1);

    cout << "Capacity = " << v.capacity() << endl;

    v.push_back(2);

    cout << "Capacity = " << v.capacity() << endl;

    v.push_back(3);

    cout << "Capacity = " << v.capacity() << endl;
    cout << "Size = " << v.size() << endl;

    cout << "element at 2nd index" << v[2] << endl; 

    cout << "front element " << v.front() << endl;
    cout << "last element  " << v.back() << endl;

    cout << "Before pop" << endl;
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "size before clear " << v.size() << endl;
    v.clear();
    cout << "size after clear " << v.size() << endl;

    for(int i=0;i<5;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for(int i=0;i<5;i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}