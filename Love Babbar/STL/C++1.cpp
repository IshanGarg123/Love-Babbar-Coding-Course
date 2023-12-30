#include<iostream>
#include<array>
using namespace std;

int main()
{
    int arr[3] = {1,2,3};
    array <int,4> arr1 ={1,2,3,4};
    int size = arr1.size();
    for(int i=0;i<size;i++)
    {
        cout << arr1[i] << endl;
    }

    cout << "Element at 2nd index = " << arr1[2] << endl;
    cout << "array empty or not" << arr1.empty() << endl;
    cout << "front element " << arr1.front() << endl;
    cout << "last element " << arr1.back() << endl;

    return 0;
}