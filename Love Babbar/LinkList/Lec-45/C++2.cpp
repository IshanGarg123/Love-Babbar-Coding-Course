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

Node* findMid(Node* head)
{
    int len = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        len++; 
        temp = temp -> next;
    }
    len = len/2 + 1;

    temp = head;
    for(int i=1;i<len;i++)
    {
        temp = temp -> next;
    }
    return temp;
}

Node* findMide1(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while(head != NULL || head->next != NULL)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

int main()
{
    Node* head = new Node(5);
    Node* tail = head;
    InsertAtHead(head,4);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,1);

    print(head);

    Node* temp = findMid(head);
    print(temp);

    return 0;
}