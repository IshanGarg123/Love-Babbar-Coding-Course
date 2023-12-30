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

Node* reverse(Node* head)
{
    if(head->next == NULL)
    {
        return head;
    }
    Node* ans = reverse(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return ans;
}

Node* add(Node* head1,Node* head2)
{
    Node* temp = new Node(-1);
    Node* ans = temp;
    while(head1!=NULL && head2!=NULL)
    {
        int sum = head1-> data + head2 -> data;
        Node* temp1 = new Node(sum);
        temp -> next = temp1;
        temp = temp1;
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    while(head1!=NULL)
    {
        int sum = head1-> data;
        Node* temp1 = new Node(sum);
        temp -> next = temp1;
        temp = temp1;
        head1 = head1 -> next;
    }
    while(head2!=NULL)
    {
        int sum = head2-> data;
        Node* temp1 = new Node(sum);
        temp -> next = temp1;
        temp = temp1;
        head2 = head2 -> next;
    }
    ans = ans -> next;
    temp = ans;
    while(temp!=NULL)
    {
        int sum = temp->data;
        if(sum>=10)
        {
            temp -> data = sum%10;
            if(temp->next == NULL)
            {
                Node* temp1 = new Node(sum/10);
                temp -> next = temp1;
            }
            else
            {
                temp -> next -> data = temp -> next -> data + sum/10;
            }
        }
        temp = temp -> next;
    }
    return ans;
}

Node* addTwoLists(Node* head1,Node* head2)
{
    head1 = reverse(head1);
    head2 = reverse(head2);

    Node* ans = add(head1,head2);

    ans = reverse(ans);
    return ans;
}


int main()
{
    Node* head = new Node(8);
    Node* tail = head;
    InsertAtHead(head,9);
    InsertAtHead(head,6);
    InsertAtHead(head,9);
    InsertAtHead(head,3);
    InsertAtHead(head,4);

    Node* head1 = new Node(6);
    Node* tail1 = head1;
    InsertAtHead(head1,0);
    InsertAtHead(head1,9);
    InsertAtHead(head1,7);
    InsertAtHead(head1,8);
    InsertAtHead(head1,3);

    print(head);
    print(head1);

    Node* temp = addTwoLists(head,head1);
    print(temp);
    return 0;
}