// reverse an Array
#include<iostream>
using namespace std;
#include <bits/stdc++.h> 

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int i=m+1;
	int j=arr.size()-1;

	while(j>i)
	{
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
}

int main()
{
    cout << "Reverse an Array" << endl;
}