#include<iostream>
using namespace std;
// valid BST
/*
bool solve(BinaryTreeNode<int> *root,int min,int max)
{
    if(root == NULL)
    {
        return true;
    }

    if(root->data >= min && root->data <=max)
    {
        bool ans1 = solve(root->left,min,root->data);
        bool ans2 = solve(root->right,root->data,max);
        if(ans1 && ans2)
        {
            return true;
        }
        return false;  
    }
    else
    {
        return false;
    }

    bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    return solve(root,INT_MIN,INT_MAX);
    }
}*/

int main()
{
    cout << "Valid BST" << endl;
    return 0;
}