#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);

    cout << binary_search(v.begin(),v.end(),5) << endl;
    cout << binary_search(v.begin(),v.end(),4) << endl;
    
    cout << lower_bound(v.begin(),v.end(),4) - v.begin() + 1 << endl;
    cout << upper_bound(v.begin(),v.end(),4) - v.begin() << endl;

    int a=3;
    int b=5;

    cout << "Max = " << max(a,b) << endl;

    cout << "Min = " << min(a,b) << endl;
    swap(a,b);

    cout << a << " " << b << endl;  

    string ab = "abcd";
    reverse(ab.begin(),ab.end());

    cout << ab << endl;

    rotate (v.begin(),v.begin()+1,v.end());

    cout << "ater Rotate" << endl;

    for(int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(),v.end());

    cout << "ater Sort" << endl;

    for(int i:v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}