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

void levelorderTraversal(Node* root)
{
    queue <Node*> q;
    q.push(root);
    int count = 0;

    while(!q.empty())
    {
        Node* temp = q.front();
        if(temp->left == NULL && temp -> right == NULL)
        {
            count++;
        }
        cout << temp -> data << " ";
        q.pop();

        if(temp->left != NULL)
        {
            q.push(temp->left);
        }
        if(temp->right != NULL)
        {
            q.push(temp -> right);
        }
    }

    cout << endl;
    cout << count << endl;
}

int noOfLeafNodes(Node* root)
{
    queue <Node*> q;
    q.push(root);
    int count = 0;

    if(root == NULL)
    {
        return 0;
    }

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp->left == NULL && temp ->right == NULL)
        {
            count++;
        }

        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp ->right);
        }
    }
    return count;
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    cout << noOfLeafNodes(root);
    return 0;
}