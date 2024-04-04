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

Node* rotateLL(Node* head, int k)
{
    int n = getLength(head);

    k = k % n;

    int t = n-k;

    Node* prev = NULL;
    Node* curr = head;

    while(t--)
    {
        prev = curr;
        curr = curr -> next;
    }

    prev -> next = NULL;

    Node* temp = curr;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = head;

    return curr;
}



int main()
{
    Node* root = new Node(10);
    Node* head = root;
    Node* tail = root;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);

    traverse(head);

    Node* ans = rotateLL(head, 2);

    traverse(ans);
}