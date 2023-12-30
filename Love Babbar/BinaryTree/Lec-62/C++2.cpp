// Inorder traversal
// preorder traversal
// postorder traversal
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout << "Enter the Data :" << endl;
    int data;
    cin >> data;

    if(data == -1)
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

void inorderTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    inorderTraversal(root -> left);
    cout << root -> data << " ";
    inorderTraversal(root -> right);
}

void preorderTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root -> data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postordertraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    postordertraversal(root->left);
    postordertraversal(root->right);
    cout << root -> data << " ";
}


int main()
{
    Node* root = NULL;
    root = buildTree(root);
    cout << "Inorder Traversal" << endl;
    inorderTraversal(root);
    cout << endl;
    
    cout << "Preorder Traversal" << endl;
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal" << endl;
    postordertraversal(root);
    cout << endl;
    
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
