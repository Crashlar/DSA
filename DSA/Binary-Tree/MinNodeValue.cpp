#include <iostream>
#include <climits>
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

void displayTree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

int minNode(Node *root)
{
    if (root == NULL)
        return INT_MAX;
    return min(root->val, min(minNode(root->left), minNode(root->right)));
}

bool CheckSymmetric(Node *root)
{
    if (root == NULL)
        return true;
    return (root->left->val == root->right->val) && CheckSymmetric(root->left) && CheckSymmetric(root->right);
}


int main()
{

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;

    displayTree(a);
    cout << endl;

    cout << minNode(a);

    cout << CheckSymmetric(a);

}