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
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

Node *mergeTwoSortedList(Node *head1, Node *head2)
{
    Node *temp = new Node(-1);
    Node *ans = temp;
    while (head1 != NULL && head2 != NULL)
    {
        if (head2->data > head1->data)
        {
            Node *temp1 = new Node(head1->data);
            temp->next = temp1;
            temp = temp1;
            head1 = head1->next;
        }
        else
        {
            Node *temp1 = new Node(head2->data);
            temp->next = temp1;
            temp = temp1;
            head2 = head2->next;
        }
    }
    while(head1!=NULL)
    {
        Node *temp1 = new Node(head1->data);
        temp->next = temp1;
        temp = temp1;
        head1 = head1->next;   
    }
    while(head2!=NULL)
    {
        Node *temp1 = new Node(head2->data);
        temp->next = temp1;
        temp = temp1;
        head2 = head2->next;  
    }
    Node* delNode = ans;
    ans = ans ->next;
    delNode -> next = NULL;
    delete delNode;
    return ans;
}

Node* mergeSort(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    } 

    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid->next; 
    mid -> next = NULL;
    left = mergeSort(left);
    right= mergeSort(right);
    Node* ans = mergeTwoSortedList(left,right);
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
    Node* temp = mergeSort(head);
    print(temp);
    return 0;
}