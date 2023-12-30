#include<iostream>
using namespace std;

/*
void Inorder(TreeNode<int> *root,vector<int> &ans)
{
    if(root == NULL)
    {
        return;
    }
    Inorder(root->left,ans);
    ans.push_back(root->data);
    Inorder(root->right,ans);
}

vector<int> mergeVector(vector<int> ans1,vector<int> ans2)
{
    int len1 = ans1.size();
    int len2 = ans2.size();

    int i=0;
    int j=0;

    vector<int> ans;

    while(i<len1 && j<len2)
    {
        if(ans1[i]<= ans2[j])
        {
            ans.push_back(ans1[i]);
            i++;
        }
        else
        {
            ans.push_back(ans2[j]);
            j++;
        }
    }
    while(i<len1)
    {
        ans.push_back(ans1[i]);
        i++;
    }
    while(j<len2)
    {
        ans.push_back(ans2[j]);
        j++;
    }
    return ans;

}

TreeNode<int>* InorderToBST(vector<int> ans,int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int mid = (s+e)/2;

    TreeNode<int>* root = new TreeNode<int>(ans[mid]);
    root -> left = InorderToBST(ans,s,mid-1);
    root ->right =InorderToBST(ans,mid+1,e);
    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Write your code here.
    vector<int> ans1;
    vector<int> ans2;

    Inorder(root1,ans1);
    Inorder(root2,ans2);

    vector<int> ans = mergeVector(ans1,ans2);
    TreeNode<int>* result = InorderToBST(ans, 0, ans.size()-1);
    return result;
}
*/

int main()
{
    cout << "Merge 2 BSTs Approach 1" << endl;
    return 0;
}