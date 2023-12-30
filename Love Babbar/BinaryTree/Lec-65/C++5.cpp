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

pair<int,int> getMaxSum(Node* root)
{
    pair<int,int> ans;
    if(root == NULL)
    {
        ans.first = 0;
        ans.second = 0;
        return ans;
    }

    pair<int,int> p1 = getMaxSum(root->left);
    pair<int,int> p2 = getMaxSum(root->right);

    pair <int,int> result;

    result.first = root->data + p1.second + p2.second;
    result.second = max(p1.first,p1.second) + max(p2.first,p2.second);
    return result;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1


int main()
{
    Node *root = NULL;
    root = buildTree(root);
    pair<int,int> ans = getMaxSum(root);
    cout << max(ans.first,ans.second) << endl;
    return 0;
}