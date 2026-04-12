#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Insert into Binary Tree level-wise (BFS approach)
Node* insertIntoBinaryTree(Node* root, int val) {
    Node* newNode = new Node(val);
    if (root == nullptr) {
        return newNode;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if (temp->left == nullptr) {
            temp->left = newNode;
            break;
        } else {
            q.push(temp->left);
        }
        
        if (temp->right == nullptr) {
            temp->right = newNode;
            break;
        } else {
            q.push(temp->right);
        }
    }
    
    return root;
}

Node* buildtree(vector<int>& nodes) {
    if (nodes.empty()) return nullptr;
    Node* root = nullptr;
    for (int val : nodes) {
        root = insertIntoBinaryTree(root, val);
    }
    return root;
}

void inorder(Node* root){
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* findmin(Node* root){
    while (root && root->left != nullptr) {
        root = root->left;
    }
    return root;
}

Node* deletenode(Node* root, int key){
    if (root == nullptr) return root;
    if (key < root->data) root->left = deletenode(root->left, key);
    else if (key > root->data) root->right = deletenode(root->right, key);
    else {
        // Case 1: Node has no children (leaf node)
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        // Case 2: Node has only one child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Node has two children
        Node* temp = findmin(root->right); // Find minimum node in the right subtree
        root->data = temp->data; // Replace the data
        root->right = deletenode(root->right, temp->data); // Delete the successor node
    }
    return root;
}

void display(Node* root){
    if (root == nullptr) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int level = q.size();
        for (int i = 0; i < level; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nodes(n);
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }
    
    Node* root = buildtree(nodes); // Build binary tree level-wise
    
    int key;
    cin >> key;
    
    root = deletenode(root, key); // Delete node with the given key
    
    display(root); // Display the tree level-wise
}
