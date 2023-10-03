#include<iostream>
using namespace std;

/*
void convertToSortedDLL(TreeNode<int> *root,TreeNode<int>* &head)
{
  if (root == NULL) {
    return;
  }

  convertToSortedDLL(root->right,head);

  root->right = head;

  if(head != NULL)
  {
    head ->left = root;
  }
  head = root;

  convertToSortedDLL(root->left,head);
}

TreeNode<int>* mergeSortedLL(TreeNode<int> *head1, TreeNode<int> *head2)
{
    TreeNode<int>* head =NULL;
    TreeNode<int>* tail = NULL;

    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data <= head2->data)
        {
            if(head == NULL)
            {
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else
            {
                tail -> right = head1;
                head1 -> left = tail;
                tail = tail -> right;
                head1 = head1 -> right;
            }

        }
        else
        {
            if(head == NULL)
            {
                head = head2;
                tail = head2;
                head2 = head2 -> right;
            }
            else
            {
                tail ->right = head2;
                head2 -> left = tail;
                tail = tail ->right;
                head2 = head2 -> right;
            }
        }
    }

    while(head1!=NULL)
    {
        tail ->right = head1;
        head1 -> left = tail;
        tail = tail -> right;
        head1 = head1 -> right;
    }

    while(head2!=NULL)
    {
        tail -> right = head2;
        head2 -> left = tail;
        tail = tail -> right;
        head2 = head2 -> right;
    }

    return head;
}

int countNodes(TreeNode<int> *head1)
{
    int count = 0;
    while(head1!=NULL)
    {
        head1 = head1->right;
        count++;
    }
    return count;
}


TreeNode<int> * convertToBST(TreeNode<int> *&head,int n)
{
    if(n<=0 || head == NULL)
    {
        return NULL;
    }

    TreeNode<int>* left = convertToBST(head,n/2);
    TreeNode<int>* root = head;
    root -> left = left;
    head = head -> right;
    root -> right = convertToBST(head,n-n/2-1);
    return root;
}



TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // convert the BST into DLL

    TreeNode<int>* head1 = NULL;
    convertToSortedDLL(root1,head1);
    TreeNode<int>* head2 = NULL;
    convertToSortedDLL(root2,head2);

    // merge to sorted DLL

    TreeNode<int>* head = mergeSortedLL(head1,head2);
    
    // counting no of nodes;
    int n = countNodes(head);

    TreeNode<int>*ans = convertToBST(head,n);

    return ans;

}

*/

int main()
{
    cout << "Merge 2 BSTs Approach 2" << endl;
    return 0;
}