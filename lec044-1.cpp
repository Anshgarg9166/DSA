// // doubly linket list

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node *&head, int d)
// {
//     Node *temp = new Node(d);
//     temp->next = head;
//     head->prev = temp;
//     head = temp;
// }

// void insertAtTail(Node *&tail, int d)
// {
//     Node *temp = new Node(d);
//     tail->next = temp;
//     temp->prev = tail;
//     tail = temp;
// }

// void insertAtPosition(Node *&head, Node *&tail, int position, int d)
// {
//     // if starting
//     if (position == 1)
//     {
//         insertAtHead(head, d);
//         return;
//     }

//     // insert in middle
//     Node *temp = head;
//     int cnt = 1;

//     // traverse
//     while (cnt < position - 1)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     // if we are inserting at last position
//     if (temp->next == NULL)
//     {
//         insertAtTail(tail, d);
//         return;
//     }

//     // create a new node
//     Node *nodeToInsert = new Node(d);
//     nodeToInsert->next = temp->next;
//     temp->next->prev = nodeToInsert;
//     temp->next = nodeToInsert;
//     nodeToInsert->prev = temp;
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int getLength(Node *&head)
// {
//     int len = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// int main()
// {
//     Node *node1 = new Node(10);

//     Node *head = node1;
//     Node *tail = node1;

//     print(head);

//     cout << "Length: " << getLength(head) << endl;

//     insertAtHead(head, 11);
//     print(head);
//     cout << "Length: " << getLength(head) << endl;

//     insertAtTail(tail, 12);
//     print(head);
//     cout << "Length: " << getLength(head) << endl;

//     cout << "Updated head " << head->data << endl;
//     cout << "Updated tail " << tail->data << endl;

//     insertAtPosition(head, tail, 4, 13);
//     print(head);
//     cout << "Length: " << getLength(head) << endl;

//     cout << "Updated head " << head->data << endl;
//     cout << "Updated tail " << tail->data << endl;
// }

// doubly linket list if we want to start with null

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << val << endl;
    }
};

void insertAtHead(Node *&head, Node *&tail, int d)
{
    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // if starting
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    // insert in middle
    Node *temp = head;
    int cnt = 1;

    // traverse
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // if we are inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    // create a new node
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    // deleting node at first
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting form position
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

        curr->prev = NULL;
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
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    cout << "Length: " << getLength(head) << endl;

    insertAtHead(head, tail, 11);
    print(head);
    cout << "Length: " << getLength(head) << endl;

    insertAtTail(tail, head, 12);
    print(head);
    cout << "Length: " << getLength(head) << endl;

    cout << "Updated head " << head->data << endl;
    cout << "Updated tail " << tail->data << endl;

    insertAtPosition(head, tail, 3, 13);
    print(head);
    cout << "Length: " << getLength(head) << endl;

    cout << "Updated head " << head->data << endl;
    cout << "Updated tail " << tail->data << endl;

    deleteNode(head, tail, 3);
    print(head);
    cout << "Length: " << getLength(head) << endl;

    cout << "Updated head " << head->data << endl;
    cout << "Updated tail " << tail->data << endl;
}