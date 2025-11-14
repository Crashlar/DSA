#include <iostream>
using namespace std;

class Node
{

public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }

    ~Node()
    {
        delete left;
        delete right;
    }
};

// print the all node left to right
void displayTree(Node *root)
{
    if (root == NULL)
        return;
    // NOTE: said by preorder
    // root -> left -> right
    cout << root->val << " ";
    displayTree(root->left);   // left 
    displayTree(root->right);  // right
}


void inorderdisplay(Node *root)
{
    if (root == NULL)
    return;
    // left -> root -> right

    inorderdisplay(root->left);
    // NOTE: said by inorder
    cout << root->val << " ";
    inorderdisplay(root->right);
}


void Postorderdisplay(Node *root)
{
    if (root == NULL) 
        return;
    // left -> right -> root
    Postorderdisplay(root->left);
    Postorderdisplay(root->right);
    // NOTE: said by postorder
    cout << root->val << " ";
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

    cout << "Tree in pre-order traversal: ";
    displayTree(a);
    cout << endl;

    cout << "Tree in in-order traversal: ";
    inorderdisplay(a);
    cout << endl;

    cout << "Tree in post-order traversal: ";
    Postorderdisplay(a);
    cout << endl;
}