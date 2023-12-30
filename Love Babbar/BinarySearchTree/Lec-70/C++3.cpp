#include<iostream>
using namespace std;

/*
int minimumValue(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return -1;
    }
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}

int maximumValue(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return -1;
    }
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
}

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    pair<int,int> ans;
    ans.first = -1;
    ans.second = -1;

    if(root == NULL)
    {
        return ans;
    }

    BinaryTreeNode<int>* temp = root;

    while(temp!=NULL)
    {
        if(key == temp->data)
        {
            if(temp->left)
                ans.first = maximumValue(temp->left);
            if(temp->right)
                ans.second = minimumValue(temp->right);
            return ans;
        }
        else if(key > temp -> data)
        {
            ans.first = temp -> data;
            temp = temp -> right;
        }
        else if(key < temp->data)
        {
            ans.second = temp -> data;
            temp = temp -> left;
        }
    }
    return ans;

}

*/

int main()
{
    cout << "Inorder Predsessor + Inorder Successor" << endl;
    return 0;
}