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

void sumK(Node* root,int k,int &count,vector<int> path)
{
    if(root == NULL)
    {
        return;
    }
    path.push_back(root -> data);

    sumK(root->left,k,count,path);
    sumK(root->right,k,count,path);

    int size = path.size();
    int sum = 0;
    for(int i=size-1;i>=0;i--)
    {
        sum += path[i];
        if(sum == k)
        {
            count++;
        }
    }
    path.pop_back();
    return;
}

int sumk(Node* root,int k)
{
    int count = 0;
    vector<int> path;
    sumK(root,k,count,path);
    return count;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1


int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << sumk(root,5);
    return 0;
}