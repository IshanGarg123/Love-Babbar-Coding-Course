// Morris Traversal
#include <iostream>
using namespace std;

/*
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    TreeNode *curr = root;
    TreeNode *prev = NULL;

    while (curr != NULL)
    {
        if (curr->left)
        {
            prev = curr->left;

            while (prev->right != NULL && prev->right != curr)
            {
                prev = prev->right;
            }

            if (prev->right == NULL)
            {
                prev->right = curr;
                curr = curr->left;
            }
            else
            {
                ans.push_back(curr->val);
                prev->right = NULL;
                curr = curr->right;
            }
        }
        else
        {
            ans.push_back(curr->val);
            curr = curr->right;
        }
    }
    return ans;
}
*/

int main()
{
    cout << "morris Traversal" << endl;
    return 0;
}
