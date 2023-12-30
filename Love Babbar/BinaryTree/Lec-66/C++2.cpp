#include<iostream>
using namespace std;

// ques No 106 leetCode 
// given inorder and post order 
// we have to make binary tree

/*
    TreeNode* solve(vector<int> &in,vector<int> &post,int &index,int inorderStart,int inorderEnd,int n ,map<int,int> &elementToIndex)
    {
        if(index < 0 || inorderStart > inorderEnd)
        {
            return NULL;
        }

        int element = post[index];
        index--;
        int position = elementToIndex[element];

        TreeNode* root = new TreeNode(element);

        root -> right = solve(in,post,index,position+1,inorderEnd,n,elementToIndex);
        root -> left = solve(in,post,index,inorderStart,position-1,n,elementToIndex);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        int index = n-1;

        map <int,int> elementToIndex;

        for(int i=0;i<n;i++)
        {
            elementToIndex[inorder[i]] = i;
        }

        TreeNode* ans = solve(inorder,postorder,index,0,n-1,n,elementToIndex);
        return ans;
    }
*/

int main()
{
    cout << "Inorder + Postorder = Binary Tree" << endl;
    return 0;
}