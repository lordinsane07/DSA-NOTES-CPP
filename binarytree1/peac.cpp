#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to insert a node in a Binary Search Tree
Node* insert(Node* root, int data) {
    if (root == NULL)
        return new Node(data);

    if (data < root->val)
        root->left = insert(root->left, data);
    else if (data > root->val)
        root->right = insert(root->right, data);

    return root;
}

// Function to display the tree in pre-order
void displaytree(Node* root) {
    if (root == NULL) return;
     //displaytree(root->left);
    cout << root->val << " ";
    displaytree(root->left);
    displaytree(root->right);
}

// Function to find the sum of all nodes
int sum(Node* root) {
    if (root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

// Function to calculate the size of the tree
int size(Node* root) {
    if (root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

// Function to find the maximum value in the tree
int maxintree(Node* root) {
    if (root == NULL) return INT_MIN;
    int lmax = maxintree(root->left);
    int rmax = maxintree(root->right);
    return max(root->val, max(lmax, rmax));
}

// Function to calculate the number of levels in the tree
int levels(Node* root) {
    if (root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

int main() {
    Node* root = NULL;
    int n, val;

    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the values of the nodes:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "Tree (Pre-order): ";
    displaytree(root);
    cout << endl;

    cout << "Sum of all nodes: " << sum(root) << endl;
    cout << "Size of the tree: " << size(root) << endl;
    cout << "Maximum value in the tree: " << maxintree(root) << endl;
    cout << "Number of levels in the tree: " << levels(root) << endl;

    return 0;
}
