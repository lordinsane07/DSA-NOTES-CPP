#include <iostream>
#include <vector>

using namespace std;

// Binary Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a node in BST
Node* insertBST(Node* root, int val) {
    // If the tree is empty, return a new node
    if (root == nullptr) {
        return new Node(val);
    }

    // Recur down the tree and insert according to BST properties
    if (val < root->data) {
        root->left = insertBST(root->left, val);
    } else if (val > root->data) {
        root->right = insertBST(root->right, val);
    }

    return root;
}

// Function to build BST from a vector of values
Node* buildBST(const vector<int>& nodes) {
    Node* root = nullptr;
    for (int val : nodes) {
        root = insertBST(root, val);
    }
    return root;
}

// In-order traversal (left, root, right)
void inorder(Node* root) {
    if (root == nullptr) return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Reverse In-order traversal (right, root, left)
void reverseInorder(Node* root) {
    if (root == nullptr) return;
    
    reverseInorder(root->right);
    cout << root->data << " ";
    reverseInorder(root->left);
}

// Function to find the minimum value node in a subtree
Node* findMin(Node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
Node* deleteNode(Node* root, int key) {
    if (root == nullptr) return root;

    // Recur down the tree to find the node to be deleted
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with the key found

        // Case 1: Node has no children (leaf node)
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }

        // Case 2: Node has one child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Node has two children
        Node* temp = findMin(root->right);  // Find the in-order successor
        root->data = temp->data;  // Replace with in-order successor
        root->right = deleteNode(root->right, temp->data);  // Delete the in-order successor
    }

    return root;
}

int main() {
    int n;
    cin >> n;

    vector<int> nodes(n);
    for (int i = 0; i < n; ++i) {
        cin >> nodes[i];
    }

    // Build the BST from the vector of nodes
    Node* root = buildBST(nodes);

    // Perform forward in-order traversal (which will print the elements in sorted order)
    inorder(root);
    cout << endl;

    // Perform reverse in-order traversal (which will print the elements in descending order)
    reverseInorder(root);
    cout << endl;

    // Deleting a node
    int key;
    cout << "Enter a node value to delete: ";
    cin >> key;
    root = deleteNode(root, key);

    // Display the BST after deletion
    inorder(root);
    cout << endl;

    return 0;
}
