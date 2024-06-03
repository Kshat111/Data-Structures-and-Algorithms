#include <iostream>

using namespace std;

// Node structure for the BST
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to traverse the BST in preorder
void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " "; // Process the current node
    preorder(root->left);      // Traverse left subtree
    preorder(root->right);     // Traverse right subtree
}

// Function to traverse the BST in inorder
void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);       // Traverse left subtree
    cout << root->data << " "; // Process the current node
    inorder(root->right);      // Traverse right subtree
}

// Function to traverse the BST in postorder
void postorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    postorder(root->left);     // Traverse left subtree
    postorder(root->right);    // Traverse right subtree
    cout << root->data << " "; // Process the current node
}

int main() {
    Node* root = nullptr;
    
    // Inserting elements into the BST
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);

    // Traversing and printing the BST in different orders
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}