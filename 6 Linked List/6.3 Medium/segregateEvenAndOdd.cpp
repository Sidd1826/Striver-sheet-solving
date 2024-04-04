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

void insertAtTail(Node* &tail, int data)
{
    Node* newNode = new Node(data);

    tail -> next = newNode;

    tail = newNode;
}

void traverse(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";

        temp = temp -> next;
    }
    cout << endl;
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

void evenAndOdd(Node* head)
{
    if(head == NULL || head -> next == NULL)
        return;

    Node* odd = head;
    Node* even = head -> next;
    Node* evenHead = head -> next;

    while(even != NULL && even -> next != NULL)
    {
        odd -> next = odd -> next -> next;
        even -> next = even -> next -> next;

        odd = odd -> next;
        even = even -> next;
    }

    odd -> next = evenHead;
}



int main()
{
    Node* root = new Node(5);
    Node* head = root;
    Node* tail = root;

    insertAtTail(tail, 6);
    insertAtTail(tail, 7);
    insertAtTail(tail, 8);
    insertAtTail(tail, 9);
    insertAtTail(tail, 10);

    traverse(head);

    evenAndOdd(head);

    traverse(head);
}