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

vector<int> zigZagTraversal(Node *root)
{
    vector<int> ans1;
    if (root == NULL)
    {
        return ans1;
    }
    queue<Node *> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty())
    {
        int size = q.size();
        if (leftToRight)
        {
            for (int i = 0; i < size; i++)
            {
                Node *temp = q.front();
                q.pop();
                ans1.push_back(temp->data);
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
                q.pop();
            }
            leftToRight = !leftToRight;
        }
        else
        {
            vector<int> ans;
            for(int i=size-1;i>0;i--)
            {
                Node* temp = q.front();
                q.pop();
                ans[i] = temp->data;

                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }

            leftToRight = !leftToRight;

            for(int i=0;i<ans.size();i++)
            {
                ans1.push_back(ans[i]);
            }
        }
    }
    return ans1;
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    vector <int> ans = zigZagTraversal(root);
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}