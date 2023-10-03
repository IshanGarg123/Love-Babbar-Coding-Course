#include <iostream>
#include <queue>
#include <vector>
#include<map>
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

vector<int> topView(Node* root)
{
    vector<int> ans;

    if(root == NULL)
    {
        return ans;
    }

    map<int,int> nodes;
    queue <pair<Node*,int>> q;
    q.push(make_pair(root,0));

    while(!q.empty())
    {
        Node* temp = q.front().first;
        int hd = q.front().second;
        q.pop();

        if(temp->left)
        {
            q.push(make_pair(temp->left,hd-1));
        }
        if(temp->right)
        {
            q.push(make_pair(temp->right,hd+1));
        }

        if(nodes.find(hd) == nodes.end())
        {
            nodes[hd] = temp->data;
        }
    }

    for(auto i:nodes)
    {
        cout << i.second << " ";
        ans.push_back(i.second);
    }
    return ans;

}



// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1


int main()
{
    Node *root = NULL;
    root = buildTree(root);
    vector<int> ans = topView(root);
    return 0;
}