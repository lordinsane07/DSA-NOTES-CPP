#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};
int sizeoftree(Node* root){
    if(root==nullptr) return 0;
    else return 1+sizeoftree(root->left)+sizeoftree(root->right);
}
bool iscbt (Node* root){//BFS->V IMP
int size=sizeoftree(root);
int count=0;
queue<Node*> q;
q.push(root);
while(count<size){
    Node* temp=q.front();
    q.pop();
   count++;
    if(temp!=NULL) {
        q.push(temp->left);
        q.push(temp->right);
    }
}
if(q.size()>0){
    Node* temp=q.front();
    if(temp!=NULL) return false;
    q.pop();
}
return true;
}
bool ismax(Node* root){
    if(root==NULL) return true;
    if(root->left!=NULL && root->val<root->left->val) return false;
    if(root->left!=NULL && root->val<root->right->val) return false;
    return ismax(root->left) &&  ismax(root->right);
}
int main(){
    Node* a=new Node(20);
    Node* b=new Node(15);
    Node* c=new Node(10);
    Node* d=new Node(8);
    Node* e=new Node(11);
    Node* f=NULL;
    Node* g=new Node(6);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    if(iscbt(a) && ismax(a)) cout<<"Tree is Max Heap";
    else cout<<"Tree is not Max Heap";
 }