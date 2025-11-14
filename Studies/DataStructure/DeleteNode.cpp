#include<iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
    }

    Node(int data)
    {
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

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
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

        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            position--;
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        curr->next = NULL;

        delete curr;
    }
}

void insertAtHead(Node *&head , Node*&tail , int data ){
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


int main (){
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 39);
    insertAtHead(head, tail, 34);

    PrintLL(head);
    deleteNode(head, tail, 3);
    PrintLL(head);
}