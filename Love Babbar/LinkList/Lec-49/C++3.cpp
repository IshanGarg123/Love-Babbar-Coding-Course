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

void solve(Node* head1,Node*head2)
{
    if(head1 -> next == NULL)
    {
        head1 -> next = head2;
        return;
    }
    Node* prev = head1;
    Node* curr = head1 -> next;
    Node* curr2 = head2;
    Node* next2 = curr2->next;

    while(curr!=NULL && curr2!=NULL)
    {
        int temp = curr2 -> data;
        if(temp>=prev->data && temp<=curr->data)
        {
            prev -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = curr;
            prev = curr2;
            curr2 = next2;
        }
        else
        {
            prev = curr;
            curr = curr -> next;

            if(curr == NULL)
            {
                curr -> next = curr2;
                return;
            }
        }

    }
    return;

}

Node* sortTwoLists(Node* head1,Node* head2)
{
    if(head1 == NULL)
    {
        return head2;
    }
    if(head2 == NULL)
    {
        return head1;
    }

    if(head1->data <= head2->data)
    {
        solve(head1,head2);
        return head1;
    }
    else
    {
        solve(head2,head1);
        return head2;
    }
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
    return 0;
}