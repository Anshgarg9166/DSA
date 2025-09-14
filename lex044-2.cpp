// Circular linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // if  list is empty
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // if list is not empty
        // assuminfg that elemet is present in the list

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element foun curr is representing the node

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    // cout << tail->data << " ";
    // while (tail->next != temp)
    // {
    //     cout << tail->data << " ";
    //     tail = tail->next;
    // }

    // another way
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int element)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is not empty " << endl;
        return;
    }
    else
    {
        // non empty
        // assuming that element is in the list
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;

            // if we circled back, element not found
            if (curr == tail->next)
            {
                cout << "Element " << element << " not found" << endl;
                return;
            }
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *tail = NULL;
    // print(tail);
    insertNode(tail, 1, 12);
    insertNode(tail, 12, 124);
    insertNode(tail, 124, 2);
    insertNode(tail, 2, 4);
    print(tail);
    deleteNode(tail, 2);
    print(tail);
}