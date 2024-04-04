// execution in leetCode

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

Node* sortLL(Node* &head)
{
    Node* zero = new Node(-1);
    Node* zeroHead = zero;

    Node* one = new Node(-1);
    Node* oneHead = one;

    Node* two = new Node(-1);
    Node* twoHead = two;

    Node* temp = head;

    while(temp != NULL)
    {
        if(temp -> data == 0)
        {
            zero -> next = temp;
            zero = temp;
        }

        else if(temp -> data == 1)
        {
            one -> next = temp;
            one = temp;
        }
        
        else
        {
            two -> next = temp;
            two = temp;
        }
        temp = temp -> next;
    }

    zero -> next = (oneHead -> next ) ? oneHead -> next : twoHead -> next;
    one -> next = twoHead -> next;
    two -> next = NULL;

    head = zeroHead -> next;



    return head;

}



int main()
{
    Node* root = new Node(1);
    Node* head = root;
    Node* tail = root;

    insertAtTail(tail, 0);
    insertAtTail(tail, 0);
    insertAtTail(tail, 2);
    insertAtTail(tail, 1);
    insertAtTail(tail, 2);

    traverse(head);

    Node* ans = sortLL(head);

    traverse(ans);
}