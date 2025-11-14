#include <iostream>
#include <climits>
using namespace std;

class Node{
    // attributes of the node
    public:
    int val;
    Node* left;
    Node* right;

    // constructor to initialize a node
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }


    // destructor to free memory
    ~Node(){
        delete left;
        delete right;
    }
};

// function to display the tree in pre-order traversal
// pre-order traversal: root -> left -> right
void displayTree(Node* root){
    if(root == NULL) return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

// sum of all nodes in the tree
int sumOfTree(Node* root){
    if(root == NULL) return 0;
    return root->val + sumOfTree(root->left) + sumOfTree(root->right);
}

// size of binary tree
int sizeofTree(Node* root){
    if (root == NULL) return 0;
    return 1 + sizeofTree(root->left) + sizeofTree(root->right);
}

// maxnodevalue of tree 
int maxNodevalue(Node* root){
    if (root == NULL) return INT_MIN;
    return max(root-> val , max(maxNodevalue(root->left), maxNodevalue(root->right)));
}

// minnodevalue of tree
int minNodevalue(Node* root){
    if (root == NULL) return INT_MAX;
    return min(root-> val , min(minNodevalue(root->left), minNodevalue(root->right)));
}


// product of the node
int ProductofTree(Node* root){
    if (root == NULL) return 1;
    return root->val * ProductofTree(root->left) * ProductofTree(root->right);
}

// NoofLevels in the tree
int NoofLevels(Node* root){
    if (root == NULL) return 0;
    return 1 + max(NoofLevels(root->left), NoofLevels(root->right));
}


// Height of the node
// height = no of levels - 1
int HeightofNode(Node* root){
    return NoofLevels(root) - 1;
}

// diameter of the tree
int diameterOfTree(Node* root){
    if (root == NULL) return 0;
    int leftHeight = NoofLevels(root->left);
    int rightHeight = NoofLevels(root->right);
    int leftDiameter = diameterOfTree(root->left);
    int rightDiameter = diameterOfTree(root->right);
    return max(leftHeight + rightHeight, max(leftDiameter, rightDiameter));
}

// check for same tree
bool CheckSameTree(Node* root){
    
}


int main(){
    // a is root node of the tree
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    
    // manually creating the tree
    a->left = b;
    a->right = c;
    b->left = d;        
    b->right = e;
    c->left = f;
    c->right = g;

    cout << "Tree in pre-order traversal: ";
    displayTree(a);   
    cout << endl;
    cout << "Sum of all nodes in the tree: " << sumOfTree(a) << endl; 
    cout << "Size of the tree: " << sizeofTree(a) << endl;

    cout << "Max node value in the tree: " << maxNodevalue(a) << endl;

    cout << "Min node value in the tree: " << minNodevalue(a) << endl;

    cout << "Product of all nodes in the tree: " << ProductofTree(a) << endl;

    cout << "Number of levels in the tree: " << NoofLevels(a) << endl;

    cout << "Height of the tree: " << HeightofNode(a) << endl;
    cout << "Diameter of the tree: " << diameterOfTree(a) << endl;
    
}