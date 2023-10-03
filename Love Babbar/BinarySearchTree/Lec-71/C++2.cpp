#include<iostream>
using namespace std;

/*
void Inorder(TreeNode<int>* root,vector<TreeNode<int>*> &ans)
{
    if(root==NULL)
    {
        return;
    }

    Inorder(root->left,ans);
    ans.push_back(root);
    Inorder(root->right,ans);
}


TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<TreeNode<int>*> ans;
    Inorder(root,ans);

    for(int i=0;i<ans.size()-1;i++)
    {
        ans[i] -> left = NULL;
        ans[i] -> right = ans[i+1]; 
    }

    ans[ans.size()-1]->left = NULL;
    ans[ans.size()-1]->right = NULL;

    return ans[0];
}

*/

int main()
{
    cout << "Flatten BST into Sorted LinkList" << endl;
    return 0;
}