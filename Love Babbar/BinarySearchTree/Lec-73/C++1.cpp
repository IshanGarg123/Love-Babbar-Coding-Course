#include<iostream>
using namespace std;

/*

class info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(TreeNode<int>* root, int &maxSize)
{
    info ans;
    if(root == NULL)
    {
        ans.maxi = INT_MIN;
        ans.mini = INT_MAX;
        ans.isBST = true;
        ans.size = 0;
        return ans;
    }

    info ans1 = solve(root->left,maxSize);
    info ans2 = solve(root->right,maxSize);

    ans.maxi = max(ans2.maxi,root->data);
    ans.mini = min(ans1.mini,root->data);
    ans.size = ans1.size + ans2.size + 1;

    if(ans1.isBST && ans2.isBST && (root -> data > ans1.maxi && root->data < ans2.mini))
    {
        ans.isBST = true;
    }
    else
    {
        ans.isBST = false;
    }
    if(ans.isBST)
    {
        maxSize = max(ans.size,maxSize);
    }
    return ans;
}

int largestBST(TreeNode<int>* root) 
{
    // Write your code here.
    int ans;
    info result = solve(root,ans);
    return ans;


}
*/

int main()
{
    cout << "Largest BST in a Binary Tree" << endl;
    return 0;
}