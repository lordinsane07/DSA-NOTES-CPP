#include<iostream>
#include<queue>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left=right=nullptr;
    }
};

Node* insert(Node* root,int val){
    if(root==nullptr){
        return new Node(val);
    }
    if(root->data>val){
        root->left=insert(root->left,val);
    }
    else {
        root->right=insert(root->right,val);
    }
    return root;
}
void levelorder(Node* root){
    if(root==nullptr){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=nullptr){
            q.push(curr->left);
        }
        if(curr->right!=nullptr){
            q.push(curr->right);
        }
    }
}
int main(){
    int n;
    cin>>n;
    Node* root=nullptr;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        root=insert(root,val);
    }
    levelorder(root);
}