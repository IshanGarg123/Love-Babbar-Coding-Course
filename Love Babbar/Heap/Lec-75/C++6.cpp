#include<iostream>
using namespace std;

/*

void Inorder(BinaryTreeNode* root,vector<int> &ans)
{
	if(root == NULL)
	{
		return;
	}
	Inorder(root->left,ans);
	ans.push_back(root->data);
	Inorder(root->right,ans);
}

void fullPreorder(BinaryTreeNode* root,vector<int> &ans,int &index)
{
	if(root == NULL)
	{
		return;
	}
	root -> data = ans[index];
	index++;
	fullPreorder(root->left,ans,index);
	fullPreorder(root->right,ans,index);

}


BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	// Write your code here.
	vector<int> ans;
	Inorder(root,ans);
	int index = 0;

	fullPreorder(root,ans,index);
	return root;
}
*/

int main()
{
    cout << "Convert BST into min heap" << endl;
}