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

void levelOrderTraversal(Node* root)
{
    queue <Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        cout << temp -> data << " ";

        if(temp -> left != NULL)
        {
            q.push(temp -> left);
        }
        if(temp -> right != NULL)
        {
            q.push(temp -> right);
        }
    }
}

void levelOrderTraversal_better(Node* root)
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

            if(temp -> left != NULL)
            {
                q.push(temp->left);
            }
            if(temp -> right != NULL)
            {
                q.push(temp -> right);
            }
        }
    }
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    cout << "the preorder transversal :" << endl;
    levelOrderTraversal_better(root);
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
