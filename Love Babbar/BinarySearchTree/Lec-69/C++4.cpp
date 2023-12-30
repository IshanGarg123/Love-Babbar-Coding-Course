// deletion in BST
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

int mini(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    while(root->left!=NULL)
    {
        root = root->left;
    }

    return root->data;
}

int maxi(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    while(root->right!=NULL)
    {
        root = root->right;
    }
    return root->data;
}

Node* deleteNode(Node* root,int x)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == x)
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if(root->left!=NULL && root->right==NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left==NULL && root->right!=NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left!=NULL && root->right!=NULL)
        {
            int max = maxi(root->left);
            root -> data = max;
            root->left = deleteNode(root->left,max);
            return root;
        }
    }
    else if(x > root->data)
    {
        root->right = deleteNode(root->right,x);
    }
    else
    {
        root->left = deleteNode(root->left,x);
    }
}

int main()
{
    Node* root = NULL;

    cout << "enter data to create BST" << endl;
    takeInput(root);
    levelOrderTraversal(root);
    cout << endl;

    root = deleteNode(root,10);

    levelOrderTraversal(root);
    cout << endl;

    return 0;
}

// 10 8 21 7 27 5 4 3 -1