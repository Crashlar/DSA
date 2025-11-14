#include <iostream>
using namespace std;

class BST {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
        // parameterize constructor 
        Node(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

    // Helper for insertion
    Node* insert(Node* node, int val) {
        if (!node) return new Node(val);
        if (val < node->data)
            node->left = insert(node->left, val);
        else if (val > node->data)
            node->right = insert(node->right, val);
        return node;
    }

    // Helper for inorder traversal
    void inorder(Node* node) {
        if (node) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    // Helper for searching
    Node* search(Node* node, int key) {
        if (!node || node->data == key) return node;
        if (key < node->data)
            return search(node->left, key);
        return search(node->right, key);
    }

    // Helper for deletion
    Node* deleteNode(Node* node, int key) {
        if (!node) return node;
        if (key < node->data)
            node->left = deleteNode(node->left, key);
        else if (key > node->data)
            node->right = deleteNode(node->right, key);
        else {
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = minValueNode(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left)
            current = current->left;
        return current;
    }

public:
    BST() : root(nullptr) {}

    void insert(int val) {
        root = insert(root, val);
    }

    void inorder() {
        inorder(root);
        cout << endl;
    }

    bool search(int key) {
        return search(root, key) != nullptr;
    }

    void deleteKey(int key) {
        root = deleteNode(root, key);
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder traversal: ";
    tree.inorder();

    cout << "Deleting 20...\n";
    tree.deleteKey(20);
    cout << "Inorder after deletion: ";
    tree.inorder();

    int key = 40;
    cout << "Searching for " << key << ": ";
    cout << (tree.search(key) ? "Found\n" : "Not Found\n");

    return 0;
}
