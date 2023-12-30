#include<iostream>
using namespace std;

/*
void Inorder(TreeNode<int>* root,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }

    Inorder(root->left,ans);
    ans.push_back(root->data);
    Inorder(root->right,ans);
}


TreeNode<int>* makeTree(vector<int> ans,int s,int e)
{
    if(s>e)
    {
        return NULL;
    }

    int mid = (s+e)/2;

    TreeNode<int>* root = new TreeNode<int>(ans[mid]);
    root->left = makeTree(ans,s,mid-1);
    root->right = makeTree(ans,mid+1,e);

    return root;
}


TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int> ans;
    Inorder(root,ans);
    int size = ans.size();

    return makeTree(ans,0,size-1);
}

*/

int main()
{
    cout << "Normal BST into Balanced BST" << endl;
    return 0;
}