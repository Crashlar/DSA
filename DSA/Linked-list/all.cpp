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
        // cout << "I am inside parameterized constructor" << endl;
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Destuctor called for : " << this->data << endl;
    }
};

void PrintLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
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

void insertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        // emplty LL

        // step1 : create new node
        Node *newNode = new Node(data);

        // step 2: update head

        head = newNode;
        tail = newNode;
    }
    else
    {
        // non- empty

        // create a new node
        Node *newNode = new Node(data);
        // attach new node to head node
        newNode->next = head;
        // update node

        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // emplty LL

        // step1 : create new node
        Node *newNode = new Node(data);

        // step 2: update head

        head = newNode;
        tail = newNode;
    }
    else
    {
        // non - empty

        // step 1 : create new node
        Node *newNode = new Node(data);
        // step 2 : tail node ko attach karo new node se
        tail->next = newNode;
        // step 3 : update tail
        tail = newNode;
    }
}

void createTail(Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // when loop end
    // then the temp pointer
    // stand on the last node
    //
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position < 1)
    {
        cout << "Can't insert , please enter a valid position " << endl;
        return;
    }

    int length = getlength(head);

    if (position == 1)
    {
        insertAtHead(head, tail, data);
    }
    else if ((position == length + 1) | (position > length))
    {
        insertAtTail(head, tail, data);
    }
    else
    {
        // insert at middle of the index

        // step 1: create a node
        Node *newNode = new Node(data);
        // step2: traverse prev // current to position
        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            prev = curr;
            curr = curr->next;
            position--;
        }
        // step3: attach prev to new Node
        prev->next = newNode;
        // step 4: attach newNode to curr

        newNode->next = curr;
    }
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "Not Delete , boz LL is empty " << endl;
        return;
    }
    int length = getlength(head);

    if (head == tail){
        Node* temp = head; 
        delete temp ; 
        head = NULL; 
        tail = NULL;
        return ; 
    }

    // delete from head
    if (position == 1)
    {
        // first node to delete
        // Step 1 : create a temp node
        Node *temp = head;
        // step 2 : head point to next node
        head = head->next;
        // step 3 : temp-> next makes NULL
        temp->next = NULL;
        // step 4 : delete temp
        delete temp;
    }
    else if (position == length)
    {
        // delete tail node

        // find pevious
        Node *prev = head;
        while (prev->next != tail)
        {
            prev = prev->next;
        }
        prev->next = NULL;

        delete tail;

        tail = prev;
    }
    else
    {
        // middle me koi node ko delte kar do

        // step 1: set prev / curr pointers
        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            position--;
            prev = curr;
            curr = curr->next;
        }

        // step 2 : prev -> next me curr ko node add kar do
        prev->next = curr->next;

        // step 3: node ko isolate kar do
        curr->next = NULL;

        // step 4: delete node
        delete curr;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 39);
    insertAtHead(head, tail, 34);

    insertAtTail(head, tail, 48);
    PrintLL(head);

    insertAtPosition(head, tail, 103, 6);
    PrintLL(head);
    deleteNode(head, tail, 3);
    PrintLL(head);
}

