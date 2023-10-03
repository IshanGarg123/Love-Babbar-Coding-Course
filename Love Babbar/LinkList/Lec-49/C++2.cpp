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

Node* sortList(Node* head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead ;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead ;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead ;

    Node* curr = head;
    while(curr != NULL)
    {
        if(curr -> data == 0)
        {
            Node* temp = new Node(0);
            zeroTail -> next = temp;
            zeroTail = temp;
        }
        else  if(curr -> data == 1)
        {
            Node* temp = new Node(1);
            oneTail -> next = temp;
            oneTail = temp;
        }
        else  if(curr -> data == 2)
        {
            Node* temp = new Node(2);
            twoTail -> next = temp;
            twoTail = temp;
        }
        curr = curr -> next;
    }

    if(oneHead -> next != NULL)
    {
        zeroTail -> next = oneHead -> next;
        oneTail -> next = twoHead -> next;
    }
    else
    {
        zeroTail -> next = twoHead -> next;
    } 

    head = zeroHead -> next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main()
{
    Node* head = new Node(0);
    Node* tail = head;
    InsertAtHead(head,2);
    InsertAtHead(head,0);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    InsertAtHead(head,2);

    print(head);
    Node* temp = sortList(head);
    print(temp);
    return 0;
}