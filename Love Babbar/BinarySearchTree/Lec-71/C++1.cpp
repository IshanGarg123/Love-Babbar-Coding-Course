#include<iostream>
using namespace std;


/*
void Inorder(BinaryTreeNode<int>* root,vector<int> &ans)
{
    if(root == NULL)
    {
        return;
    }
    Inorder(root->left,ans);
    ans.push_back(root->data);
    Inorder(root->right,ans);
}


bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
    vector<int> ans;
    Inorder(root,ans);
    int i = 0;
    int j = ans.size()-1;

    while(j>i)
    {
        if(ans[i]+ ans[j] == target)
        {
            return true;
        }
        else if(target > ans[i] + ans[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}

*/

int main()
{
    cout << "Two Sum in BST" << endl;
    return 0;
}