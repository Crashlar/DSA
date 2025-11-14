#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class BinaryNode
{

public:
    BinaryNode *left;
    BinaryNode *right;
    int val;

    BinaryNode(int val);

    ~BinaryNode();
};

BinaryNode::BinaryNode(int val)
{
    this->val = val;
    left = NULL;
    right = NULL;
}

BinaryNode::~BinaryNode()
{
    delete left;
    delete right;
}

BinaryNode *construct(int arr[], int n)
{
    queue<BinaryNode *> q;
    BinaryNode *root = new BinaryNode(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while (q.size() > 0 && i < n)
    {
        BinaryNode *temp = q.front();
        q.pop();
        BinaryNode *l;
        BinaryNode *r;
        if (arr[i] != INT_MIN)
            l = new BinaryNode(arr[i]);
        else
            l = NULL;
        if (arr[j] != INT_MIN)
            r = new BinaryNode(arr[j]);
        else
            r = NULL;

        temp->left = l;
        temp->right = r;
        if (l != NULL)
            q.push(l);
        if (r != NULL)
            q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}

int levels(BinaryNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void nthLevel(BinaryNode *root, int curr_level, int level)
{
    if (root == NULL)
        return;
    if (curr_level == level)
    {
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left, curr_level + 1, level);
    nthLevel(root->right, curr_level + 1, level);
}

void levelOrder(BinaryNode *root)
{
    int n = levels(root);
    for (int i = 1; i <= n; i++)
    {
        nthLevel(root, 1, i);
        cout << endl;
    }
}

void leftBoundary(BinaryNode *root)
{
    if(root == NULL)return ;
    if(root->left == NULL && root->right == NULL) return ; 
    cout << root->val << " ";
    
    leftBoundary(root->left);
    if(root->left == NULL) leftBoundary(root->right);


}

void bottomBoundary(BinaryNode *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return;
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rightBoundary(BinaryNode *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        return;
    rightBoundary(root->right);
    if(root->right == NULL) rightBoundary(root->left);
    cout << root->val << " "; // reverse order 
}

// print the boundary element
void boundary(BinaryNode *root)
{
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, INT_MIN, 6, 7, INT_MIN, 8, INT_MIN, 9, 10, INT_MIN, 11, INT_MIN, 12, INT_MIN, 13, INT_MIN, 14, 15, 16, INT_MIN, 17, INT_MIN, INT_MIN, 18, INT_MIN, 19, INT_MIN, INT_MIN, INT_MIN, 20, 21, 22, 23, INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN, 28, INT_MIN, INT_MIN};

    int n = sizeof(arr) / sizeof(arr[0]);
    BinaryNode *root = construct(arr, n);

    // boundry traversal

    boundary(root);

    // leftBoundary(root);
    // // cout  << endl ; 
    // bottomBoundary(root);
    // // cout  << endl ; 
    // rightBoundary(root->right);


} 