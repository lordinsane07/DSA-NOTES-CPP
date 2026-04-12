/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }
    else if (key < root->data) {
        root->left = insert(root->left, key);
    }
    else {
        root->right = insert(root->right, key);
    }
    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* findmin(Node* root) {
    while (root->left) {
        root = root->left;
    }
    return root;
}

Node* deletenode(Node* root, int key) {
    if (root == nullptr) return root;

    // Traverse the tree to find the node to delete
    if (key < root->data) {
        root->left = deletenode(root->left, key);
    }
    else if (key > root->data) {  // Fix condition to go to the right child
        root->right = deletenode(root->right, key);
    }
    else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: get the inorder successor (smallest in the right subtree)
        Node* temp = findmin(root->right);  // Corrected to use the right subtree
        root->data = temp->data; // Copy the inorder successor's data to this node
        root->right = deletenode(root->right, temp->data); // Delete the inorder successor
    }
    return root;
}

// Function to find the k-th smallest element in the BST
void kthSmallestUtil(Node* root, int& k, int& result) {
    if (root == nullptr) return;

    // Traverse left subtree first
    kthSmallestUtil(root->left, k, result);

    // Decrement k (counting down to find k-th smallest)
    k--;
    if (k == 0) {
        result = root->data;
        return;
    }

    // Traverse right subtree
    kthSmallestUtil(root->right, k, result);
}

int kthSmallest(Node* root, int k) {
    int result = -1;
    kthSmallestUtil(root, k, result);
    return result;
}

int main() {
    Node* root = nullptr;
    int n;
    cout << "Enter number of nodes to insert: ";
    cin >> n;

    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        int key;
        cin >> key;
        root = insert(root, key);
    }

    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << endl;

    int data;
    cout << "Enter value to delete: ";
    cin >> data;

    root = deletenode(root, data); // Corrected to update root after deletion

    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;

    int k;
    cout << "Enter k to find k-th smallest element: ";
    cin >> k;
    int kth = kthSmallest(root, k);
    if (kth != -1) {
        cout << "The " << k << "-th smallest element is: " << kth << endl;
    } else {
        cout << "The k-th smallest element does not exist." << endl;
    }

    return 0;
}
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left=right=nullptr;
    }
};
Node* insert(Node* root,int key){
    if(root==nullptr){
        return new Node(key);
    }
    else if(key<root->data){
        root->left = insert(root->left,key);
    }
    else {
        root->right=insert(root->right,key);
    }
    return root;
}
void inorder(Node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* findmin(Node* root){
    while(root->left){
        root=root->left;
    }
    return root;
}
Node* deletenode(Node* root,int key){
    if(root==nullptr) return root;
    else if(key<root->data) root->left=deletenode(root->left,key);
    else if(key>root->data) root->right=deletenode(root->left,key);
    else{
        if(root->left==nullptr && root->right==nullptr){
            delete root;
            return nullptr;
        }
        if(root->left==nullptr){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==nullptr){
             Node* temp=root->left;
            delete root;
            return temp;
        }
        Node* temp=findmin(root->left);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
    return root;
}
int main(){
    Node* root=nullptr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int key;
        cin>>key;
        root=insert(root,key);
    }
    inorder(root);
    int data;
    cin>>data;
    deletenode(root,data);
    inorder(root);
}