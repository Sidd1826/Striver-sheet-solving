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

Node* removeFromEnd(Node* head, int k)
{
    if(head == NULL)
        return head;

    Node* slow = head;
    Node* fast = head;

    while(k--)
    {
        fast = fast -> next;
    }

    if(fast == NULL)
    {
        return head;
    }

    while(fast -> next != NULL )
    {
        slow = slow -> next;
        fast = fast -> next;
    }

    Node* delNode = slow -> next;
    slow -> next = slow -> next -> next;
    delete delNode;

    return head;
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

    Node* ans = removeFromEnd(head, 3);

    traverse(ans);
}