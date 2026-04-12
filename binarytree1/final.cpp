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
Node* insert(Node* root,int data){
    Node* newnode=new Node(data);
       if(root==nullptr){
        return newnode;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp->left==nullptr){
            temp->left=newnode;
            break;
        }
        else{
            q.push(temp->left);
        }
        if(temp->right==nullptr){
            temp->right=newnode;
            break;
        }
        else{
            q.push(temp->right);
        }
    }
    return root;
}
int main(){
    int n;
    cin>>n;
    Node* root=nullptr;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        root=insert(root,data);
    }
   /* void display(){
        if(root==nullptr){
            return;
        }
        queue<Node*> q;
        q.push()
    }*/
}
/*#include<iostream>
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
Node* insert(Node* root,int val){
    if(root==nullptr){
        return new Node(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
Node* findmin(Node* root){
    while(root->left){
        root=root->left;
    }
    return root;
}
Node* deletenode(Node* root,int key){
    if(root==nullptr){
        return root;
    }
    else if(key<root->data) deletenode(root->left,key);
    else if(key>root->data) deletenode(root->right,key);
    else{
        if(root->left==nullptr && root->right==nullptr) {
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
void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
bool fact(Node* root,int f){
    if (root == nullptr) {
        return false;  // If the node is not found
    }
    if(root->data==f) return true;
    else if(root->data<f) fact(root->right,f);
    else fact(root->left,f);
}
int size(Node* root){
    if(root==nullptr) return 0;
    return 1+size(root->left)+size(root->right);
}
int sum(Node* root){
    if(root==nullptr) return 0;
    return root->data+sum(root->left)+sum(root->right);
}
bool ispalindrome(Node*root){
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
    Node* root=nullptr;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        root=insert(root,val);
    }
    //inorder(root);
    //int key;
    //cin>>key;
   // deletenode(root,key);
    //inorder(root);
    //postorder(root);
    preorder(root);
   // int m;
    //cin>>m;
    //int f=1;
    //for(int i=1;i<=m;i++){
      //  f=f*i;
    //}
    //if(fact(root,f)){
       // cout<<"Found"<<endl;
       // }
        //else{
          //  cout<<"h";
        //}
       // cout<<size(root);
        //cout<<sum(root);
        //cout<<ispalindrome(root)<<endl;
        //return 0;
}*/