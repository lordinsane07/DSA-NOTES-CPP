#include<iostream>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left=NULL;
        this->right=NULL;
    }
};
void displaytree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displaytree(root->left);
    displaytree(root->right);
}
int sum(Node* root){
    if(root==NULL) return 0;
    int ans=root->val+sum(root->left)+sum(root->right);
    return ans;
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}
int maxintree(Node* root){
    if(root==NULL) return INT_MIN;
    int lmax=maxintree(root->left);
    int rmax=maxintree(root->right);
    return max(root->val,max(lmax,rmax));
}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void nthlevel(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) {
        cout<<root->val<<" ";
    return;
    }
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
}
void nthlevelrev(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) {
        cout<<root->val<<" ";
    return;
    }
    nthlevelrev(root->right,curr+1,level);
    nthlevelrev(root->left,curr+1,level);
}
//int levels(Node* root){
  //  if(root==NULL) return 0;
    //return 1 + max(levels(root->left),levels(root->right));
//}
void levelorder(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}
void levelorderqueue(Node* root){//BFS->V IMP
queue<Node*> q;
q.push(root);
while(!q.empty()){
    Node* temp=q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left!=NULL) q.push(temp->left);
    if(temp->right!=NULL) q.push(temp->right);
}
cout<<endl;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    preorder(a);
    cout<<endl;
    inorder(a);
    cout<<endl;
    postorder(a);
    cout<<endl;
    //leevl order traversal
   // nthlevel(a,1,1);
    //nthlevel(a,1,2);
    //nthlevel(a,1,3);
    levelorder(a);
   // nthlevelrev(a);
   levelorderqueue(a);
}