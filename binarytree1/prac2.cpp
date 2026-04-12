#include <iostream>
#include <vector>
#include <queue>

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

// Function to insert nodes in level order
Node* buildTree(const vector<int>& nodes) {
    if (nodes.empty()) return nullptr;

    Node* root = new Node(nodes[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;
    while (i < nodes.size()) {
        Node* current = q.front();
        q.pop();

        // Assign left child
        if (i < nodes.size()) {
            current->left = new Node(nodes[i]);
            q.push(current->left);
            i++;
        }

        // Assign right child
        if (i < nodes.size()) {
            current->right = new Node(nodes[i]);
            q.push(current->right);
            i++;
        }
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

int main() {
    int n;
    cin >> n;

    vector<int> nodes(n);
    for (int i = 0; i < n; ++i) {
        cin >> nodes[i];
    }

    // Create the binary tree in level-order
    Node* root = buildTree(nodes);

    // Perform forward in-order traversal
    inorder(root);
    cout << endl;

    // Perform reverse in-order traversal
    reverseInorder(root);
    cout << endl;

    return 0;
}