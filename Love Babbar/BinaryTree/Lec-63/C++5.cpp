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
    int height;
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

Pair isBalanced(Node* root)
{
    Pair p;
    if(root == NULL)
    {
        p.ans = true;
        p.height = 0;
        return p;
    }

    Pair ans1 = isBalanced(root->left);
    Pair ans2 = isBalanced(root->right);

    if(ans1.ans && ans2.ans)
    {
        int h1 = ans1.height;
        int h2 = ans2.height;
        int h = max(h1,h2);

        if(h==h1 && h1-h2<=1)
        {
            p.ans = true;
            p.height = max(ans1.height,ans2.height) +1;
            return p;

        }
        else if(h==h2 && h2-h1<=1)
        {
            p.ans = true;
            p.height = max(ans1.height,ans2.height) +1;
            return p;

        }
        else
        {
            p.ans = false;
            p.height = max(ans1.height,ans2.height) +1;
            return p;

        }
    }
    p.ans = false;
    p.height = max(ans1.height,ans2.height) +1;
    return p;
}


// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    Pair temp = isBalanced(root);
    cout << temp.ans << endl;
    return 0;
}