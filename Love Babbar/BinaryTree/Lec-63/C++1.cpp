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

int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int ans;
    int h1 = height(root -> left);
    int h2 = height(root -> right);

    if(h1>h2)
    {
        ans = h1 + 1;
    }
    else
    {
        ans = h2 + 1;
    }
    return ans;
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    cout << height(root) << endl;
    return 0;
}