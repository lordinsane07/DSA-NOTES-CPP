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

// Function to find the minimum value node in a subtree
Node* findMin(Node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the binary tree
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

// Function to display the binary tree level by level
void display(Node* root) {
    if (root == nullptr) {
        cout << "The tree is empty." << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        
        for (int i = 0; i < levelSize; ++i) {
            Node* current = q.front();
            q.pop();
            
            cout << current->data << " ";
            
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        
        cout << endl;  // Move to the next level
    }
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
    cout << "In-order Traversal:" << endl;
    inorder(root);
    cout << endl;

    // Perform reverse in-order traversal
    cout << "Reverse In-order Traversal:" << endl;
    reverseInorder(root);
    cout << endl;

    // Display the tree structure
    cout << "Tree structure:" << endl;
    display(root);

    // Deleting a node
    int key;
    cout << "Enter a node value to delete: ";
    cin >> key;
    root = deleteNode(root, key);

    // Display tree after deletion
    cout << "Tree structure after deletion:" << endl;
    display(root);

    return 0;
}
