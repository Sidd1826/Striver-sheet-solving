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

Node* getMid(Node* &head)
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

Node* reverseRec(Node* curr, Node* prev)
{
    if(curr == NULL)    
        return prev;

    Node* forward = curr -> next;
    curr -> next = prev;

    return reverseRec(forward, curr);
}

bool isPallindrome(Node* &head)
{
    Node* mid = getMid(head); 

    Node* temp = mid -> next;
    mid -> next = reverseRec(temp, NULL);

    Node* head1 = head;
    Node* head2 = mid -> next;

    while(head2 != NULL)
    {
        if(head1 -> data != head2 -> data)
            return false;
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    temp = mid -> next;
    mid -> next = reverseRec(temp, NULL);

    return true;
}


int main()
{
    Node* root = new Node(10);
    Node* head = root;
    Node* tail = root;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 20);
    insertAtTail(tail, 10);

    traverse(head);

    cout << isPallindrome(head) << endl;
}