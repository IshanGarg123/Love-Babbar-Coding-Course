#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the Data :" << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new Node(data);

    cout << "Enter the element to be Insert at Left of" << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the element to be Insert at Right of" << data << endl;
    root->right = buildTree(root->right);

    return root;
}

Node* kthAncestor(Node* root,int &k,int n)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == n)
    {
        return root;
    }

    Node* ans1 = kthAncestor(root->left,k,n);
    Node* ans2 = kthAncestor(root->right,k,n);

    if(ans1!=NULL && ans2==NULL)
    {
        k--;
        if(k==0)
        {
            return root;
        }
        return ans1;
    }
    if(ans1==NULL && ans2!=NULL)
    {
        k--;
        if(k==0)
        {
            return root;
        }
        return ans2;
    }
    return NULL;
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1


int main()
{
    Node *root = NULL;
    root = buildTree(root);
    int k=2;
    Node*ans = kthAncestor(root,k,4);
    cout << ans->data << endl;
    return 0;
}