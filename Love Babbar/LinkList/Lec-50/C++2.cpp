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

Node* middle(Node* head)
{
    Node* slow = head;
    Node* fast = head -> next;
    while(fast!= NULL && fast -> next != NULL)
    {
        fast = fast->next->next;
        slow = slow -> next;
    }
    return slow;
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

bool ispalindrome(Node* head)
{
    if(head == NULL)
    {
        return true;
    }
    if(head-> next == NULL)
    {
        return true;
    }

    Node* middle1 = middle(head);
    middle1 -> next = reverse(middle1->next);
    Node* head1 = head;
    Node* head2 = middle1 -> next;

    while(head2 != NULL)
    {
        if(head1-> data != head2->data)
        {
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    middle1 -> next = reverse(middle1->next);
    return true;
    /*Node* temp = middle(head);
    Node* extra = temp;
    Node* temp1 = reverse(temp->next);
    temp -> next = temp1;
    Node* temp2 = head;
    temp = temp -> next;
    int ans=1;
    while(temp!=NULL)
    {
        if(temp->data == temp2 -> data)
        {
            temp = temp -> next;
            temp2 = temp2 -> next;
        }
        else
        {
            ans = 0;
            break;
        }
     }

    Node* temp3 = reverse(extra -> next);
    extra -> next = temp3;

    if(ans==1)
    {
        return true;
    }
    else
    {
        return false;
    }*/
}

int main()
{
    Node* head = new Node(1);
    Node* tail = head;
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,1);

    print(head);

    cout << ispalindrome(head) << endl;
    print(head);
    return 0;
}