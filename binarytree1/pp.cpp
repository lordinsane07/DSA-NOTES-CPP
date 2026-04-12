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
        left=nullptr;
        right=nullptr;
    }
};
Node* insertIntoBST(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insertIntoBST(root->left, val);
    } else {
        root->right = insertIntoBST(root->right, val);
    }
    return root;
}

Node* buildtree(vector<int>& node) {
    if (node.empty()) return nullptr;
    Node* root = nullptr;
    for (int val : node) {
        root = insertIntoBST(root, val);
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
    if(key<root->data) root->left=deletenode(root->left,key);
    else if(key>root->data) root->right=deletenode(root->right,key);
    else {
        if(root->left==nullptr && root->right==nullptr){
            delete root;
            return nullptr;
        }
        if(root->left==nullptr){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        if(root->right==nullptr){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        Node* temp=findmin(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
    return root;
}
void display(Node* root){
    if(root==nullptr) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int level=q.size();
        for(int i=0;i<level;i++){
            Node* temp=q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
    }
    cout<<endl;
}
}
int main(){
    int n;
    cin>>n;
    vector<int> node(n);
    for(int i=0;i<n;i++){
        cin>>node[i];
    }
    Node* root=buildtree(node);
   // inorder(root);
    //display(root);
    int key;
    cin>>key;
    root=deletenode(root,key);
    display(root);
} 