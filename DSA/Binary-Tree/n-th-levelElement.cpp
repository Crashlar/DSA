#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

public:
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
    };
};

void PreOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

int NoofLevels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(NoofLevels(root->left), NoofLevels(root->right));
}

void nthLevelElement(Node *root, int curr_level, int level)
{
    if (root == NULL)
        return;
    if (curr_level == level)
    {
        cout << root->val << " ";
        // optimized the code using return and save the space and time complexity
        return;
    }
    nthLevelElement(root->left, curr_level + 1, level);
    nthLevelElement(root->right, curr_level + 1, level);
}

// check balanced node
bool checkBalanced(Node *root)
{
    if (root == NULL)
    return true;
    int leftHeight = NoofLevels(root->left);
    int rightHeight = NoofLevels(root->right);
    if (abs(leftHeight - rightHeight) > 1)
    return false;
    return checkBalanced(root->left) && checkBalanced(root->right);
}


// reverse order Traversal
void nthLevelReverse(Node *root, int curr_level, int level)
{
    if (root == NULL)
    return;
    if (curr_level == level)
    {
        cout << root->val << " ";
        return;
    }
    nthLevelReverse(root->right, curr_level + 1, level);
    nthLevelReverse(root->left, curr_level + 1, level);
}

void lebelOrder(Node *root)
{
    if (root == NULL)
        return;
    int n = NoofLevels(root);
    for (int i = 1; i <= n; i++)
    {
        nthLevelReverse(root, 1, i);
        cout << endl;
    }
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
    PreOrder(a);
    cout << endl;

    cout << "Number of levels in the tree: " << NoofLevels(a) << endl;

    cout << "Nth level element : ";
    // nthLevelElement( a , 1 , 3 );

    // level Order traversal

    // cout << endl;
    // nthLevelElement( a , 1 , 1 );
    // cout << endl;
    // nthLevelElement( a , 1 , 2 );
    // cout << endl;
    // nthLevelElement( a , 1 , 3 );

    cout << endl;
    lebelOrder(a);

    // cout << checkBalanced(a);

    cout << "Reverse Order Traversal: " << endl;
    // reverseOrderTraversal(a , 1 , 3);
    lebelOrder(a);
}
