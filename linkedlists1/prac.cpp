#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class LinkedList{
    public:
    Node* head=nullptr;
    void insertatbegin(int val){
        Node* newnode=new Node(val);
        if(head==nullptr){
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void insertatend(int val){
        Node* newnode=new Node(val);
        if(head==nullptr){
            head=newnode;
        }
        else{
            Node* temp=head;
            while(temp->next){
            temp=temp->next;
        }
        temp->next=newnode;
        }
    }
    void insertatidx(int idx,int val){
        Node* newnode=new Node(val);
        if(idx==0){
            insertatbegin(val);
        }
        else{
            Node* temp=head;
            for(int i=1;i<idx-1 && temp!=nullptr;i++){
                temp=temp->next;
            }
            if(temp!=nullptr){
                newnode->next=temp->next;
                temp->next=newnode;
        }
    }
    }
    void deletehead(){
        head=head->next;
    }
    void deleteend(){
        Node* temp=head;
        while(temp->next->next){
            temp=temp->next;
        }
        temp->next=nullptr;
    }
    void deleteidx(int idx){
        Node* temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    int n;
    cin>>n;
    LinkedList ll;
    for(int i=0;i<n;i++){
        int item;
        cin>>item;
        ll.insertatbegin(item);
       // ll.insertatend(item);
    }
    //ll.deleteend();
    ll.deleteidx(2);
    ll.display();
}