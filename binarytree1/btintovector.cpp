#include <iostream>
#include <queue>
#include <vector>
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

    if (val == -1) return NULL;  // No tree if root is -1

    TreeNode* root = new TreeNode(val);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        cout << "Enter left child of " << current->val << " (enter -1 for no child): ";
        cin >> val;
        if (val != -1) {
            current->left = new TreeNode(val);
            q.push(current->left);
        }

        cout << "Enter right child of " << current->val << " (enter -1 for no child): ";
        cin >> val;
        if (val != -1) {
            current->right = new TreeNode(val);
            q.push(current->right);
        }
    }
    return root;
}

// Function to store the binary tree values in a vector using level order traversal
void storeInVector(TreeNode* root, vector<int>& vec) {
    if (root == NULL) return;  // Base case: if the node is null, do nothing

    // Use a queue for level order traversal
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        vec.push_back(current->val);  // Add the current node's value to the vector

        // Push left and right children into the queue
        if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }
}

int main() {
    // Build tree from user input
    TreeNode* root = insertLevelOrder();

    // Store the binary tree values in a vector
    vector<int> values;
    storeInVector(root, values);

    // Print the values stored in the vector
    cout << "Values in the binary tree: ";
    for (int val : values) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
