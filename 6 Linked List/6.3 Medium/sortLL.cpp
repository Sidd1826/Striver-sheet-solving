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

Node* mergeLists(Node* list1, Node* list2)
{
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;

    while(list1 != NULL && list2 != NULL)
    {
        if(list1 -> data < list2 -> data)
        {
            temp -> next = list1;
            temp = list1;
            list1 = list1 -> next;
        }
        else
        {
            temp -> next = list2;
            temp = list2;
            list2 = list2 -> next;
        }
    }

    while(list1 != NULL)
    {
        temp -> next = list1;
        temp = list1;
        list1 = list1 -> next;
    }
    while(list2 != NULL){
        temp -> next = list2;
        temp = list2;
        list2 = list2 -> next;
    }
    
    return dummyNode -> next;
}

Node* sortLL(Node* head)
{
    if(head == NULL || head -> next == NULL)
        return head;

    Node* mid = getMid(head);

    Node* right = mid -> next;
    mid -> next = NULL;
    Node* left = head;

    left = sortLL(left);
    right = sortLL(right);

    return mergeLists(left, right);
}



int main()
{
    Node* root = new Node(10);
    Node* head = root;
    Node* tail = root;

    insertAtTail(tail, 80);
    insertAtTail(tail, 30);
    insertAtTail(tail, 50);
    insertAtTail(tail, 90);
    insertAtTail(tail, 100);

    traverse(head);

    Node* ans = sortLL(head);

    traverse(ans);
}