#include<iostream>
#include<map>
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

bool detectLoop(Node* head)
{
    if(head == NULL)
    {
        return false;
    }

    map <Node*,bool> visited;

    Node* temp = head;

    while(temp!=NULL)
    {
        if(visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

bool startLoop(Node* head)
{
    if(head == NULL)
    {
        return false;
    }

    map <Node*,bool> visited;

    Node* temp = head;

    while(temp!=NULL)
    {
        if(visited[temp] == true)
        {
            cout << temp -> data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

bool floydLoop(Node* head)
{
    if(head == NULL)
    {
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL)
    {
        fast = fast-> next;
        if(fast != NULL)
        {
            fast = fast -> next;
        }
        slow = slow -> next;
        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}

Node* floydLoop1(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL)
    {
        fast = fast-> next;
        if(fast != NULL)
        {
            fast = fast -> next;
        }
        slow = slow -> next;
        if(fast == slow)
        {
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head)
{
    Node* fast = floydLoop1(head);
    if(fast == NULL)
    {
        return NULL;
    }
    Node* slow = head;
    while(slow!=fast)
    {
        slow = slow -> next;
        fast = fast -> next;
    }
    //cout << slow -> data << endl;
    return slow;
}

void removeLoop(Node* head)
{
    if(head == NULL)
    {
        return;
    }
    Node* start = getStartingNode(head);
    Node* temp = start;
    while(temp -> next != start)
    {
        temp = temp -> next;
    }
    temp -> next = NULL;
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

    tail -> next = head;

    //print(head);
    cout << floydLoop(head) << endl;
    removeLoop(head);
    cout << floydLoop(head) << endl;
    print(head);

    /*cout << floydLoop(head);
    cout << endl;
    //Node* temp = getStartingNode(head);
    //cout << endl;
    removeLoop(head);
    cout << floydLoop(head);
    cout << endl;
    print(head);*/

    return 0; 
}