#include <iostream>
#include <queue>
#include <vector>
#include<map>
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

void leftview(Node* root,vector<int> &ans,int level)
{
    if(root == NULL)
    {
        return;
    }

    if(level == ans.size())
    {
        ans.push_back(root->data);
        cout << root->data << " ";
    }

    leftview(root->left,ans,level+1);
    leftview(root->right,ans,level+1);
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1


int main()
{
    Node *root = NULL;
    root = buildTree(root);
    vector<int> ans;
    leftview(root,ans,0);
    return 0;
}