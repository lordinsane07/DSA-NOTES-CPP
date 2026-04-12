#include<iostream>
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
Node* insert(){
    int val;
    cin>>val;
    if(val==-1) return nullptr;
    Node* root=new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()){
        Node* current=q.front();
        q.pop();
        cin>>val;
        if(val!=-1){
            current->left=new Node(val);
            q.push(current->left);
        }
         if(val!=-1){
            current->right=new Node(val);
            q.push(current->right);
        }
    }
    return root;
}
bool sym(Node* root){
    if(root==nullptr) return true;
    queue<Node*> q;
    q.push(root->left);
    q.push(root->right);
    while(!q.empty()){
        Node* leftnode=q.front();
         q.pop();
         Node* rightnode=q.front();
         q.pop();
         if(leftnode==nullptr && rightnode==nullptr) continue;
         if(leftnode==nullptr || rightnode==nullptr) return false;
         if(leftnode->data!=rightnode->data) return false;
        q.push(leftnode->left);
        q.push(rightnode->right);
        q.push(leftnode->right);
        q.push(rightnode->left);
    }
    return true;
}
int main(){
    Node* root=insert();
    if(root==nullptr){
        cout<<"The tree is empty"<<endl;
    }
    cout<<sym(root);
}
/*#include <iostream>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to insert nodes into the binary tree level-wise
TreeNode* insertLevelOrder() {
    int val;
    cout << "Enter the root value: ";
    cin >> val;

    // Handling case where root is -1 (no tree)
    if (val == -1) {
        return NULL;
    }

    TreeNode* root = new TreeNode(val);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        // Insert left child
        cout << "Enter left child of " << current->val << " (enter -1 for no child): ";
        cin >> val;
        if (val != -1) {
            current->left = new TreeNode(val);
            q.push(current->left);
        }

        // Insert right child
        cout << "Enter right child of " << current->val << " (enter -1 for no child): ";
        cin >> val;
        if (val != -1) {
            current->right = new TreeNode(val);
            q.push(current->right);
        }
    }
    return root;
}

// Function to check if a tree is symmetric (palindrome) using iteration
bool isSymmetric(TreeNode* root) {
    if (root == NULL) return true; // A null tree is symmetric

    // Use a queue to store pairs of nodes to compare
    queue<TreeNode*> q;
    q.push(root->left);
    q.push(root->right);

    while (!q.empty()) {
        TreeNode* leftNode = q.front(); q.pop();
        TreeNode* rightNode = q.front(); q.pop();

        // If both nodes are null, continue to the next pair
        if (leftNode == NULL && rightNode == NULL) continue;

        // If one of them is null or their values don't match, the tree is not symmetric
        if (leftNode == NULL || rightNode == NULL || leftNode->val != rightNode->val) {
            return false;
        }

        // Push the children of the nodes in the correct order to check for symmetry
        q.push(leftNode->left);
        q.push(rightNode->right);
        q.push(leftNode->right);
        q.push(rightNode->left);
    }

    return true;
}

int main() {
    // Build tree from user input
    TreeNode* root = insertLevelOrder();

    if (root == NULL) {
        cout << "The tree is empty." << endl;
        return 0;
    }

    // Check if the binary tree is symmetric
    if (isSymmetric(root)) {
        cout << "The binary tree is a palindrome (symmetric)." << endl;
    } else {
        cout << "The binary tree is not a palindrome (symmetric)." << endl;
    }

    return 0;
}
*/