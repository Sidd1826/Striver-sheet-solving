#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

    Node(int d)
    {
        this -> data = d;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data)
{
    Node* newNode = new Node(data);

    newNode -> next = head;

    head = newNode;
}

void insertAtTail(Node* &tail, int data)
{
    Node* newNode = new Node(data);

    tail -> next = newNode;

    tail = newNode;
}

void insertAtPosition(Node* head, int data, int pos)
{
    if(pos == 1)
    {
        insertAtHead(head, data);
    }

    Node* temp = head;
    int count = 1;

    while(count < pos-1)
    {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL)
    {
        insertAtTail(temp, data);
    }

    Node* newNode = new Node(data);

    newNode -> next = temp -> next;

    temp -> next = newNode;
}

void deleteatHead(Node* &head)
{
    Node* temp = head;

    head = head -> next;

    delete temp;
}

void deleteAtTail(Node* &head, Node* &tail)
{
    Node* temp = head;

    while(temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }

    delete tail;

    temp -> next = NULL;
}

void deleteAtPos(Node* &head, int pos)
{
    if(pos == 1)
        deleteatHead(head);

    Node* curr = head;
    Node* prev = NULL;
    int count = 1;

    while(count < pos)
    {
        prev = curr;
        curr = curr -> next;
        count++;
    }

    prev -> next = curr -> next;

    delete curr;
}

void traverse(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";

        temp = temp -> next;
    }
}

int getLength(Node* head)
{
    Node* temp = head;
    int count = 0;

    while(temp != NULL)
    {
        count++;
        temp = temp -> next;
    }
    return count;
}

bool searchEle(Node* head, int ele)
{
    Node* temp = head;

    while(temp != NULL)
    {
        if(temp -> data == ele)
        {
            return true;
        }
        temp = temp -> next;
    }
    return false;
}

int main()
{
    Node* root = new Node(10);
    Node* head = root;
    Node* tail = root;

    // insertAtHead(head, 20);
    // insertAtHead(head, 30);
    // insertAtHead(head, 40);
    // insertAtHead(head, 50);
    // insertAtHead(head, 60);

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);

    insertAtPosition(head, 40, 4);

    // deleteatHead(head);
    // deleteAtTail(head, tail);


    traverse(head);
    cout << endl;

    cout << getLength(head) << endl;

    cout << searchEle(head, 40) << endl;
}