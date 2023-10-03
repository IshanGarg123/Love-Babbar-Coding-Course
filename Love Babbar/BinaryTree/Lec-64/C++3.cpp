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

vector<int> verticalOrder(Node* root)
{
    map<int,map<int,vector<int>>> nodes;
    // int1 = horizontal dis;
    // int2 = vertical dis;
    // vector<int> = to store data value of nodes;
    // of that particular hor and ver distance;

    queue <pair<Node*,pair<int,int>>> q;
    // int1 = hor dis;
    // int2 = ver dis;

    vector<int> ans;
    // to return ans;

    q.push(make_pair(root,make_pair(0,0)));

    while(!q.empty())
    {
        pair<Node*,pair<int,int>> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode->data);

        if(frontNode -> left)
        {
            q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
        }
        if(frontNode -> right)
        {
            q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
        }
    }
    for(auto i:nodes)
    {
        for(auto j:i.second)
        {
            for(auto k:j.second)
            {
                cout << k << " ";
                ans.push_back(k);
            }
        }
    }
    return ans;
}


// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1


int main()
{
    Node *root = NULL;
    root = buildTree(root);
    vector<int> ans = verticalOrder(root);
    return 0;
}