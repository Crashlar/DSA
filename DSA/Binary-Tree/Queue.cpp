#include <iostream>
#include <climits>
#include <queue>
using namespace std;

class Node
{
    // attributes of the node
public:
    int val;
    Node *left;
    Node *right;

    // constructor to initialize a node
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }

    // destructor to free memory
    ~Node()
    {
        delete left;
        delete right;
    }
};


void levelOrderQueue(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        // BFS -> VIMS
        if (temp != NULL) q.push(temp->right);
        if (temp != NULL) q.push(temp->left);

    }
    cout << endl;
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    

    cout<< "Tree using of queue and print sequencely : ";
    levelOrderQueue(a);

}