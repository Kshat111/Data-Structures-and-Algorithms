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
Node* insert(Node* root, int value, int& comparisons) {
    if (root == nullptr) {
        return new Node(value);
    }

    comparisons++; // Increment comparisons made
    if (value < root->data) {
        root->left = insert(root->left, value, comparisons);
    } else {
        root->right = insert(root->right, value, comparisons);
    }

    return root;
}

// Function to search for a value in the BST
bool search(Node* root, int value, int& comparisons) {
    if (root == nullptr) {
        return false;
    }

    comparisons++; // Increment comparisons made
    if (root->data == value) {
        return true; // Value found
    } else if (value < root->data) {
        return search(root->left, value, comparisons); // Search left subtree
    } else {
        return search(root->right, value, comparisons); // Search right subtree
    }
}

// Function to find the minimum value node in a subtree
Node* findMin(Node* node) {
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}

// Function to delete a node from the BST
Node* remove(Node* root, int value, int& comparisons) {
    if (root == nullptr) {
        return root;
    }

    comparisons++; // Increment comparisons made
    if (value < root->data) {
        root->left = remove(root->left, value, comparisons);
    } else if (value > root->data) {
        root->right = remove(root->right, value, comparisons);
    } else {
        // Node to be deleted found
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = remove(root->right, temp->data, comparisons);
    }
    return root;
}

// Function to count the number of nodes in the BST
int countNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    Node* root = nullptr;
    int comparisons = 0;

    // Insertion
    root = insert(root, 10, comparisons);
    comparisons = 0; // Reset comparisons for the next operation

    // Searching
    int searchValue = 10;
    if (search(root, searchValue, comparisons)) {
        cout << "Value " << searchValue << " found with " << comparisons << " comparisons." << endl;
    } else {
        cout << "Value " << searchValue << " not found." << endl;
    }
    comparisons = 0; // Reset comparisons for the next operation

    // Deletion
    int deleteValue = 10;
    root = remove(root, deleteValue, comparisons);
    cout << "After deletion, number of nodes: " << countNodes(root) << endl;

    return 0;
}