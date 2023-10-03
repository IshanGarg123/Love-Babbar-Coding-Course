#include<iostream>
using namespace std;

/*

int solve(BinaryTreeNode<int>* root,int &i,int k)
{
    if(root == NULL)
    {
        return -1;
    }

    int ans1 = solve(root->left,i,k);

    if(ans1 != -1)
    {
        return ans1;
    }

    i++;

    if(i==k)
    {
        return root->data;
    }

    int ans2 = solve(root->right,i,k);
    if(ans2 != -1)
    {
        return ans2;
    }
    return -1;
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
    int i=0;
    return solve(root,i,k);
}
*/

int main()
{
    cout << "kth smallest element in BST" << endl;
    return 0;
}