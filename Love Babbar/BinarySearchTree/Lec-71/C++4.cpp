#include<iostream>
using namespace std;

/*
BinaryTreeNode<int>* solve(vector<int> &preorder,int &i,int mini,int maxi)
{
    if(i>=preorder.size())
    {
        return NULL;
    }

    if(preorder[i]<mini || preorder[i]>maxi)
    {
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i]);
    i++;
    root -> left = solve(preorder,i,mini,root->data);
    root -> right =solve(preorder,i,root->data,maxi);

    return root; 
}

BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    // Write your code here.
    int i = 0;
    int maxi = INT_MAX;
    int mini = INT_MIN;

    return solve(preorder,i,mini,maxi);
}
*/

int main()
{
    cout << "BST From Preorder" << endl;
    return 0;
}
