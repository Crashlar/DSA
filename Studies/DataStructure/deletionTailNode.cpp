#include <iostream>
#include <stack>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
        // I am in Default Constrct
        this->data = 0;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destuctor
    ~Node()
    {
        cout << "Destuctor called for : " << this->data << endl;
    }
};

void PrintLL(Node *&head){
    Node* temp = head; 

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl ; 
    
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        // node is not empty 
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 39);
    insertAtTail(head, tail, 34);

    PrintLL(head);
}