#include<iostream>
using namespace std;

/*
    void Inorder(Node* root,vector<int> &ans)
    {
        if(root == NULL)
        {
            return;
        }
        Inorder(root->left,ans);
        ans.push_back(root->data);
        Inorder(root->right,ans);
    }
    
    void fullPostorder(Node* root,vector<int> &ans,int &index)
    {
        if(root == NULL)
        {
            return;
        }
        fullPostorder(root->left,ans,index);
        fullPostorder(root->right,ans,index);
        
        root ->data = ans[index];
        index++;
    }

    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        vector<int> ans;
        Inorder(root,ans);
        int index = 0;
        fullPostorder(root,ans,index);
    }    

*/

int main()
{
    cout << "Convert BST into max heap" << endl;
}