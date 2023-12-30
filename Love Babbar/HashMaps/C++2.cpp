// Ordered Map
// simply say map
// order of insertion of key-val pair reserves
// T.C = O(logn) 
// uses BST in it

#include<iostream>
#include<map>
using namespace std;

int main()
{
    // create toh karlea
    map<string,int> m;

    // insertion
    pair <string,int> p = make_pair("babbar",3);
    m.insert(p);

    pair <string,int> p2("Love",2); 
    m.insert(p2);

    m["mera"] = 1;

    m["mera"] = 2;

    // searching
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    // cout << m.at("unknownKey") << endl;
    // it give error 

    cout << m["unknownKey"] << endl;
    // this not give error 
    // it make a new entry with 0 value
    // <"unknown",0> entry will be made in the map

    cout << m.at("unknownKey") << endl;
    // as entry is already formed 
    // so it give val = 0;

    // size
    cout << m.size() << endl;

    // to check presence of a key
    cout << m.count("bro") << endl;

    // erase
    m.erase("love");
    cout << m.size() << endl;

    // to traverse a map
    cout << "traverse a map" << endl;
    for(auto i:m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // traverse a map using iterator
    cout << "traverse using iterator" << endl;
    map<string,int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }
    return 0;
}