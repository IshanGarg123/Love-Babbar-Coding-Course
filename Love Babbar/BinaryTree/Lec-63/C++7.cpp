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

class Pair{
    public:
    bool ans;
    int sum;
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

Pair checkSumTree(Node* root)
{
    Pair p;
    if(root == NULL)
    {
        p.ans = true;
        p.sum = 0;
        return p;
    }

    if(root->left == NULL && root ->right == NULL)
    {
        p.ans = true;
        p.sum = root -> data;
        return p;
    }

    Pair p1 = checkSumTree(root->left);
    Pair p2 = checkSumTree(root ->right);

    if(p1.ans && p2.ans)
    {
        if(root -> data == p1.sum + p2.sum)
        {
            p.ans = true;
            p.sum = 2*(root -> data);
            return p;
        }
    }
    p.ans = false;
    p.sum = 0;
    return p;
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    Pair ans = checkSumTree(root);
    cout << ans.ans << endl;
    return 0;
}