
// Singly linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // Node* means pointer to a Node object.
    // next is pointer store the address of another node

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node *&head, int d)
{
    // new node creation
    Node *temp = new Node(d);
    temp->next = head;
    head = temp; // update new head position
}

void InsertAtTail(Node *&tail, int d)
{
    // new mode creation
    Node *temp = new Node(d);
    tail->next = temp; // store the address of temp node in tail address pointer
    tail = temp;       // change the tail from old tail to new tail(temp)
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{

    // edge case
    if (position == 1)
    {
        InsertAtHead(head, d);
        return; // return otherwise it will create an extra node in below code
    }

    Node *temp = head;
    int cnt = 1; // count used for traversing
    // cont is taken 1 because is already on first position(head)

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // if we are inserting at last position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    // creating new node to insert in middle
    Node *NodetoInsert = new Node(d);
    NodetoInsert->next = temp->next;
    temp->next = NodetoInsert;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    // deleting first ot start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next; // move the head ahead
        temp->next = NULL;
        delete temp; // free the memory for start node
    }
    else
    {
        // deleting node from middle and last
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // update tail if last node is deleted
        if (curr->next == NULL)
        {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";

        // move the temp to next node address to print the next node
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    print(head);

    // InsertAtHead(head, 12);
    // print(head);

    // InsertAtHead(head, 15);
    // print(head);
    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 3, 14);
    print(head);

    insertAtPosition(head, tail, 1, 20);
    print(head);

    insertAtPosition(head, tail, 6, 30);
    print(head);

    cout << "Updated head " << head->data << endl;
    cout << "Updated tail " << tail->data << endl;

    deleteNode(4, head, tail);
    print(head);

    cout << "Updated head " << head->data << endl;
    cout << "Updated tail " << tail->data << endl;

    deleteNode(5, head, tail);
    print(head);

    cout << "Updated head " << head->data << endl;
    cout << "Updated tail " << tail->data << endl;
}