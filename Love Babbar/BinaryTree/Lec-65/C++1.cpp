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

pair<int, int> sumOfRootToleafPath(Node *root)
{
    pair<int, int> ans;

    if (root == NULL)
    {
        ans.first = 0;
        ans.second = 0;
        return ans;
    }

    pair<int, int> ans1 = sumOfRootToleafPath(root->left);
    pair<int, int> ans2 = sumOfRootToleafPath(root->right);

    if (ans1.first > ans2.first)
    {
        ans.first = ans1.first + 1;
        ans.second = ans1.second + root->data;
    }
    else if (ans2.first > ans1.first)
    {
        ans.first = ans2.first + 1;
        ans.second = ans2.second + root->data;
    }
    else
    {
        if (ans1.second >= ans2.second)
        {
            ans.first = ans1.first + 1;
            ans.second = ans1.second + root->data;
        }
        else
        {
            ans.first = ans2.first + 1;
            ans.second = ans2.second + root->data;
        }
    }
    return ans;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << sumOfRootToleafPath(root).second << endl;

    return 0;
}