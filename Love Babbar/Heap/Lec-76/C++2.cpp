#include<iostream>
using namespace std;

/*
#include <bits/stdc++.h> 
#include<queue>

class node{
    public:
    int data;
    int i;
    int j;

    node(int data,int row,int col)
    {
        this -> data = data;
        this -> i = row;
        this -> j = col;
    }
};

class compare{
    public:
    bool operator()(node* a,node* b)
    {
        return a-> data > b->data;
    }
};



vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<node*,vector<node*>,compare> minheap; 

    for(int i=0;i<k;i++)
    {
        node* temp = new node(kArrays[i][0],i,0);
        minheap.push(temp);
    }

    vector<int> ans;

    while(minheap.size()>0)
    {
        node* temp = minheap.top();
        minheap.pop();

        ans.push_back(temp->data);

        int i = temp -> i;
        int j = temp -> j;

        if(j+1 < kArrays[i].size())
        {
            node * temp1 = new node(kArrays[i][j+1],i,j+1);
            minheap.push(temp1);
        }
    }
    return ans;
}
*/

int main()
{
    cout << "Merge K Sorted Arrays" << endl;
    return 0;
}