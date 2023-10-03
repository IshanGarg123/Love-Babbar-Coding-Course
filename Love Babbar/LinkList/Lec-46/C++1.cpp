#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;

    }
};

void InsertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &head,int d)
{
    Node* temp = new Node(d);
    Node* temp1 = head;
    while(temp1 -> next != NULL)
    {
        temp1 = temp1 -> next;
    }
    temp1 -> next = temp;
}

void InsertAtTail1(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &head,Node* &tail,int d,int position)
{
    if(position == 1)
    {
        InsertAtHead(head,d);
        return;
    }

    Node* temp = new Node(d);
    Node* temp1 = head;

    for(int i=1;i<position-1;i++)
    {
        temp1 = temp1 -> next;
    }

    if(temp1 -> next == NULL)
    {
        InsertAtTail1(tail,d);
        return;
    }

    temp -> next = temp1 -> next;
    temp1 -> next = temp;
}

void DeleteNode(Node* &head,Node* &tail,int position)
{
    if(position == 1)
    {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        Node* prev;
        Node* curr = head;
        for(int i=1;i<position;i++)
        {
            prev = curr;
            curr = curr -> next;
        }

        if(curr -> next == NULL)
        {
            tail = prev;
            tail -> next = NULL;
            delete curr;
        }
        else
        {
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        }
    }
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* kReverse(Node* head,int k)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    int count = 0;
    
    // we use while to check condition also curr !=NULL


    while(curr != NULL && count < k)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    
    Node* temp = kReverse(curr,k);
    head -> next = temp;
    return prev;
}


int main()
{
    Node* head = new Node(6);
    Node* tail = head;
    InsertAtHead(head,5);
    InsertAtHead(head,4);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,1);

    print(head);

    Node* ans =kReverse(head,4);

    print(ans);
    return 0;
}