#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int d)
    {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data)
{
    Node* newNode = new Node(data);

    newNode -> next = head;
    head -> prev = newNode;

    head = newNode;
}

void insertatTail(Node* &tail, int data)
{
    Node* newNode = new Node(data);

    tail -> next = newNode;
    newNode -> prev = tail;

    tail = newNode;
}

void insertatPos(Node* &head, int data, int pos)
{
    if(pos == 1)
    {
        insertAtHead(head, data);
        return;
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
        insertatTail(temp, data);
        return;
    }

    Node* newNode = new Node(data);

    newNode -> next = temp -> next;
    temp -> next -> prev = newNode;
    temp -> next = newNode;
    newNode -> prev = temp;
}

void deleteAtHead(Node* &head)
{
    Node* temp = head;

    temp -> next -> prev = NULL;

    head = temp -> next;

    temp -> next = NULL;

    delete temp;
}

void deleteNode(Node* &head, Node* &tail,int pos)
{
    if(pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    else{
        Node* curr = head;
        Node* prev1 = NULL;
        int count= 1;

        while(count < pos)
        {
            prev1 = curr;
            curr = curr -> next;
            count++;
        }

        curr -> prev = NULL;
        prev1 -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
    
}

void traverse(Node* &head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp -> data << " ";

        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* root = new Node(10);
    Node* head = root;
    Node* tail = root;

    // traverse(head);

    // insertAtHead(head, 20);
    insertatTail(tail, 20);
    insertatTail(tail, 30);
    // insertatTail(tail, 40);
    insertatTail(tail, 50);
    insertatTail(tail, 60);

    insertatPos(head, 40, 4);

    traverse(head);

    // deleteAtHead(head);
    deleteNode(head, tail, 6);

    traverse(head);
}