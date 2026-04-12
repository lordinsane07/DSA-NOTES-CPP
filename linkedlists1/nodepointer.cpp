#include<iostream>
using namespace std;
class Node{//LINKED LIST NODE
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next=NULL;
    }
};  
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp=head;
    int n=0;
    while (temp!=NULL)
    {
        n++;
        temp=temp->next;
    }
    return n;
}
void reversedisplay(Node* head){
    if(head==NULL) return;
     reversedisplay(head->next);
    cout<<head->val<<" ";
}
void displayrec(Node* head){//recursively
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void insertAtEnd(Node* head,int val){
        Node* t=new Node(val);
        if(head->next!=NULL) head=head->next;
        head->next=t;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    //forming ll
    a->next=b;
    b->next=c;
    c->next=d;
    //Node* temp=a;
    //cout<<a->next->val;
  //  while(temp!=NULL){
    //    cout<<temp->val<<" ";
        //temp=temp->next;
    //}
    display(a);
    insertAtEnd(a,80);
    display(a);
    //cout<<size(a)<<endl;
   // displayrec(a);
    //cout<<endl;
    //reversedisplay(a);
}