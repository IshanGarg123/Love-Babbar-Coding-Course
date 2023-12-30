#include<iostream> 
using namespace std;

/*
#include<queue>
#include<limits.h>

// we create a class Node
class Node{
    public:
    int data;
    int row;
    int col;

    Node(int a,int b,int c)
    {
        data = a;
        row = b;
        col = c;
    }
};

// compare class to compare 2 Nodes which is greater
class compare{
    public:
    bool operator()(Node* a, Node* b){
        return a->data > b->data;
    }
};


int kSorted(vector<vector<int>> &a, int k, int n) {
    // declare maxi and mini
    int mini = INT_MAX;
    int maxi = INT_MIN;

    // min heap
    priority_queue<Node* , vector<Node*> , compare > minheap; 

    // putting k elements int the min heap
    // and update maxi and mini accordingly
    for(int i=0;i<k;i++)
    {
        int element = a[i][0];
        mini = min(mini,element);
        maxi = max(maxi,element);
        Node* temp = new Node(element,i,0);
        minheap.push(temp);
    }
    
    // than we make start and end to store min range of numbers
    int start = mini;
    int end = maxi;

    // than comparing the mini with maxi and udating them
    while(!minheap.empty())
    {
        Node* temp = minheap.top();
        minheap.pop();

        int mini = temp->data;

        if(maxi-mini < end-start)
        {
            start = mini;
            end = maxi;
        }

        //if mini next exists so add it
        if(temp->col + 1 < n)
        {
            Node* temp1 = new Node(a[temp->row][temp->col + 1],temp->row,temp->col+1);
            minheap.push(temp1);
            maxi = max(maxi,a[temp->row][temp->col + 1]);
        }

        // if mini next not exist break it
        else
        {
            break;
        }
    }

    return end-start+1;

}
*/

int main()
{
    cout << "Smallest Range in K Lists" << endl;
    return 0;
}