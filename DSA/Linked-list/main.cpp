#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // default constructor
    Node()
    {
        this->data = 0;
    }

    // parameterized constructor
    Node(int data)
    {
        cout << "I am incide parameter constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void PrintLL(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
        length += 1;
    }
    cout << endl;

    cout << "length : " << length << endl;
}

int getlength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count += 1;
        temp = temp->next;
    }

    return count;
}

int main()
{

    // node
    // Node a;
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *sixe = new Node(40);
    Node *forth = new Node(50);
    Node *fifth = new Node(60);

    // linked all the list data
    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixe;

        Node *head = first;
    PrintLL(head);

    cout << "Length from func : " << getlength(head) << endl;
}