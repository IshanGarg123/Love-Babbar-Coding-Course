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

void printLeftPart(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return;
    }
    cout << root -> data << " ";
    if(root -> left)
    {
        printLeftPart(root -> left);
    }
    else
    {
        printLeftPart(root -> right);
    }
}

void printLeaf(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    if(root->left == NULL && root->right==NULL)
    {
        cout << root -> data << " ";
    }
    printLeaf(root -> left);
    printLeaf(root->right);
}

void printRightPart(Node* root)
{
    if(root == NULL)
    {
        return;
    }  
    if(root->left == NULL && root->right == NULL)
    {
        return;
    }
    if(root -> right)
    {
        printRightPart(root -> right);
    }
    else
    {
        printRightPart(root->left);
    }
     cout << root -> data << " ";
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

void boundary(Node* root)
{
    printLeftPart(root);
    printLeaf(root);
    printRightPart(root);
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    boundary(root);
    return 0;
}