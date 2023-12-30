// searching in a binary Search tree
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL; 
    }
};

Node* insertInToBST(Node* &root,int d)
{
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d > root->data)
    {
        root->right = insertInToBST(root->right,d);
    }
    if(d < root->data)
    {
        root->left = insertInToBST(root->left,d);
    }
    return root;
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            if(!q.empty())
            {
                cout << endl;
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << " ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }

}

void takeInput(Node* &root)
{
    int data;
    cin >> data;

    while(data != -1)
    {
        root = insertInToBST(root,data);
        cin >> data;
    }

}

bool searchByRecursion(Node* root,int x)
{
    if(root == NULL)
    {
        return false;
    }
    if(root-> data == x)
    {
        return true;
    }
    else if(x > root->data)
    {
        return searchByRecursion(root->right,x);
    }
    else
    {
        return searchByRecursion(root->left,x);
    }
}

bool searchByIteration(Node* root,int x)
{
    Node* temp = root;
    while(temp!=NULL)
    {
        if(temp -> data == x)
        {
            return true;
        }
        else if(x > temp->data)
        {
            temp = temp -> right;
        }
        else
        {
            temp = temp->left;
        }
    }
    return false;
}

int main()
{
    Node* root = NULL;

    cout << "enter data to create BST" << endl;
    takeInput(root);
    levelOrderTraversal(root);

    cout << endl;

    cout << searchByIteration(root,8) << endl;
    cout << searchByRecursion(root,27) << endl;
    return 0;
}