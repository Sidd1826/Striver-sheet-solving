#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertatHead(Node* &head, int data)
{
    Node* newNode = new Node(data);

    newNode -> next = head;

    head = newNode;
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

Node* reverse(Node* &head)
{
    if(head == NULL)
        return head;

    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL)
    {
        Node* forward = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = forward; 
    }
    return prev;
}

Node* mid(Node* &head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

int main()
{
    Node* root = new Node(10);

    Node* head = root;

    insertatHead(head, 9);
    insertatHead(head, 8);
    insertatHead(head, 7);
    insertatHead(head, 6);
    insertatHead(head, 5);
    insertatHead(head, 4);
    insertatHead(head, 3);

    // traverse(head);

    // Node* temp = reverse(head);

    // traverse(temp);

    Node* getMid = mid(head);
    cout << getMid -> data << endl;

    
}

