// execution in leetcode

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

Node* detectLoop(Node* &head)
{
    if(head == NULL)
        return head;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast)
            return slow;
    }
    return NULL;
}

int main()
{
    // Node* root = new Node(10);
    // Node* head = root;
    // Node* tail = root;

    // insertAtTail(tail, 20);
    // insertAtTail(tail, 30);
    // insertAtTail(tail, 40);
    // insertAtTail(tail, 50);
    // insertAtTail(tail, 60);

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third;

    // traverse(head);

    Node* ans = detectLoop(head);

    cout << ans -> data << endl;

}