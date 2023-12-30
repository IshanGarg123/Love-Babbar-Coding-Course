#include<iostream>
using namespace std;


/*

   int count(struct Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int ans1 = count(root->left);
        int ans2 = count(root->right);
        
        return ans1 + ans2 + 1;
    }
  
    bool isCBT(struct Node* root, int i,int count)
    {
        if(root == NULL)
        {
            return true;
        }
        if(i>count)
        {
            return false;
        }
        bool ans1 = isCBT(root->left,2*i,count);
        bool ans2 = isCBT(root->right,2*i+1,count);
        
        if(ans1 && ans2)
        {
            return true;
        }
        return false;
    }
    
    bool isMaxOrder(struct Node* root)
    {
        if(root->left==NULL && root->right==NULL)
        {
            return true;
        }
        else if(root->left!=NULL && root->right==NULL)
        {
            if(root->data > root->left->data)
            {
                return true;
            }
            return false;
        }
        else
        {
            if(root->data > root->left->data && root->data > root->right->data)
            {
                bool ans1= isMaxOrder(root->left);
                bool ans2 = isMaxOrder(root->right);
                if(ans1 && ans2)
                {
                    return true;
                }
                return false;
            }
            return false;
        }
    }

    bool isHeap(struct Node* tree) {
        
        int totalNodes = count(tree);
        
        if(isCBT(tree,1,totalNodes) && isMaxOrder(tree))
        {
            return true;
        }
        return false;
    }
*/

int main()
{
    cout << "is Given Binary Tree is a Heap" << endl;
}