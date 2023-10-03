#include<iostream>
using namespace std;

// ques No 105 leetCode 
// given inorder and pre order 
// we have to make binary tree

/*
    TreeNode* solve(vector<int> &pre, vector<int> &in,int &index,int 
    inorderStart , int inorderEnd,int n,map<int,int> &elementToIndex)
    {
        if(index >= n || inorderStart > inorderEnd)
        {
            return NULL;
        }
        int element = pre[index];
        index++;
        int position = elementToIndex[element];
        TreeNode* root = new TreeNode(element);
        root -> left =solve(pre,in,index,inorderStart,position-1,n,elementToIndex);
        root -> right =solve(pre,in,index,position+1,inorderEnd,n,elementToIndex);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = inorder.size();
        int index = 0;
        map <int,int> elementToIndex;

        for(int i=0;i<size;i++)
        {
            elementToIndex[inorder[i]] = i;
        }

        TreeNode* ans = solve(preorder,inorder,index,0,size-1,size,elementToIndex);
        return ans;
    }
*/

int main()
{
    cout << "Inorder + Preorder = Binary Tree" << endl;
    return 0;
}