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

template<typename A,typename B>

class Pair{
    public:
    A diameter;
    B height;
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

Pair<int,int> diameterFast(Node* root)
{
    Pair <int,int> p;
    if(root == NULL)
    {
        p.diameter = 0;
        p.height = 0;
        return p;
    }

    Pair<int,int> p1 = diameterFast(root ->left);
    Pair<int,int> p2 = diameterFast(root ->right);

    int ans1 = p1.diameter;
    int ans2 = p2.diameter;
    int ans3 = p1.height + p2.height + 1;

    int ans = max(ans1,max(ans2,ans3));

    p.diameter = ans;
    p.height = max(p1.height,p2.height) + 1;
    return p;
}


// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    Pair <int,int> ans;
    ans = diameterFast(root);
    cout << "height " << ans.height << endl;
    cout << "diameter " << ans.diameter << endl; 
    return 0;
}