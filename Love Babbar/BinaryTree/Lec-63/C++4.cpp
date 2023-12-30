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

bool isBalanced(Node* root)
{
    if(root == NULL)
    {
        return true;
    }

    bool ans1 = isBalanced(root -> left);
    bool ans2 = isBalanced(root -> right);

    if(ans1 && ans2)
    {
        int h1 = height(root -> left);
        int h2 = height(root -> right);
        int h = max(h1,h2);

        if(h==h1 && h1-h2<=1)
        {
            return true;
        }
        else if(h == h2 && h2-h1<=1)
        {
            return true;
        }
        else
        {
            return false;
        } 
    }
    return false;
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    cout << isBalanced(root) << endl;
    return 0;
}