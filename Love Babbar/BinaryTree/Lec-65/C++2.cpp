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

Node* lca(Node* root,int n1,int n2)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(root -> data == n1 || root -> data == n2)
    {
        return root;
    }

    Node* ans1 = lca(root->left,n1,n2);
    Node* ans2 = lca(root->right,n1,n2);

    if(ans1!=NULL && ans2!=NULL)
    {
        return root;
    }

    else if(ans1==NULL && ans2!=NULL)
    {
        return ans1;
    }

    else if(ans1!=NULL && ans2==NULL)
    {
        return ans2;
    }
    else
    {
        return NULL;
    }
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1


int main()
{
    Node *root = NULL;
    root = buildTree(root);
    return 0;
}