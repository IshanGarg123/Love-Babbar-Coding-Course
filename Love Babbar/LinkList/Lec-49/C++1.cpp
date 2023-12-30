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
    Node* temp = head;
    int zero = 0;
    int one = 0;
    int two = 0;
    while(temp!=NULL)
    {
        if(temp -> data == 0)
        {
            zero++;
        }
        else if(temp -> data == 1)
        {
            one++;
        }
        else if(temp -> data == 2)
        {
            two++;
        }
        temp = temp -> next;
    }

    temp = head;
    for(int i=0;i<zero;i++)
    {
        temp -> data = 0;
        temp = temp -> next;
    }
    for(int i=0;i<one;i++)
    {
        temp -> data = 1;
        temp = temp -> next;
    }
    for(int i=0;i<two;i++)
    {
        temp -> data = 2;
        temp = temp -> next;
    }
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