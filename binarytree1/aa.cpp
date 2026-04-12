#include <iostream>
#include <queue>
using namespace std;

// Node structure for the Binary Tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to insert nodes into the binary tree level-wise
Node* insertLevelOrder(Node* root, int key) {
    if (root == nullptr) {
        // Create a new node if the tree is empty
        return new Node(key);
    }

    queue<Node*> q; // Use a queue to perform level order insertion
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        // Insert the left child if it's empty
        if (current->left == nullptr) {
            current->left = new Node(key);
            return root; // Return the unchanged root pointer
        } else {
            q.push(current->left); // Push the left child into the queue
        }

        // Insert the right child if it's empty
        if (current->right == nullptr) {
            current->right = new Node(key);
            return root; // Return the unchanged root pointer
        } else {
            q.push(current->right); // Push the right child into the queue
        }
    }

    return root; // Return the unchanged root pointer
}

// Function for post-order traversal of the binary tree
void postOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    // Traverse the left subtree
    postOrderTraversal(root->left);

    // Traverse the right subtree
    postOrderTraversal(root->right);

    // Print the data of the current node
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr; // Initialize the binary tree as empty
    int score;

    // Input the scores continuously and insert into the binary tree
    while (true) {
        cin >> score;
        if (score == -1) {
            break; // Stop input when -1 is entered
        }
        root = insertLevelOrder(root, score); // Insert scores into the tree
    }

    // Output the post-order traversal
    postOrderTraversal(root);
    cout << endl; // Print a newline after traversal
    return 0;
}
