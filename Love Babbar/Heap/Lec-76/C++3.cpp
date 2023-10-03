#include<iostream>
using namespace std;

/*
#include<queue>

class compare{
    public:
    bool operator()(Node<int>* a,Node<int>*b)
    {
        return a->data > b->data;
    }
};
Node<int>* mergeKLists(vector<Node<int>*> &listArray)
{
    // Write your code here.
    priority_queue<Node<int>*,vector<Node<int>*>,compare> minheap;

    for(int i=0;i<listArray.size();i++)
    {
      if (listArray[i] != NULL) {
        minheap.push(listArray[i]);
      }
    }

    Node<int>* head = NULL;
    Node<int>* tail = NULL;

    while(minheap.size()>0)
    {
        Node<int>* temp = minheap.top();
        minheap.pop();

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }

        if(temp->next!=NULL)
        {
            minheap.push(temp->next);
        }
    }
    return head;
}
*/

int main()
{
    cout << "Merge K Sorted LinkLists" << endl;
    return 0;
}