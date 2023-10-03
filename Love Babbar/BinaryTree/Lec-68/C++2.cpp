#include <iostream>
using namespace std;

// flattern a binary tree to link list

// leetcode 114 question no;

/*

void flatten(TreeNode *root)
{
    TreeNode *curr = root;
    TreeNode *prev = NULL;

    while(curr != NULL)
    {
        if (curr->left)
        {
            prev = curr->left;
            while (prev->right != NULL)
            {
                prev = prev->right;
            }
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
}

*/

int main()
{
    cout << "Flattern a binary tree into link list" << endl;
}