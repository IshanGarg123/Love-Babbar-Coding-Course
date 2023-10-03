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


Node* buildTreeFromLevelOrder(Node* root)
{
    queue <Node*> q;
    int data;
    cout << "enter root data" << endl;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout << "enter the data of left of" << temp -> data << endl;

        int leftData;
        cin >> leftData;

        if(leftData != -1)
        {
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }

        cout << "enter the data of right of" << temp -> data << endl;

        int rightData;
        cin >> rightData;

        if(rightData != -1)
        {
            temp -> right = new Node(rightData);
            q.push(temp -> right);
        }
    }
    return root;

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
    root = buildTreeFromLevelOrder(root);
    cout << "the level order traversal" << endl;
    levelOrderTraversal_better(root);
    return 0;
}

// 1 3 7 11 5 17 -1 -1 -1 -1 -1 -1 -1
