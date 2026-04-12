#include<iostream>
using namespace std;
class Node{
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
    Node* deleteNode(Node* head,Node* target){
        if(head==target){
            head=head->next;
            return head;
        }
        Node* temp = head;
        while(temp->next!=target){
            temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
    }
int main(){
     Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Node* head=a;
    display(head);
    head=deleteNode(head,a);
    display(head);
}//delete the mididle node of linked list //hw
//#include <iostream>
#include <vector>

using namespace std;

// Hash function to compute the initial index
int calHash(int key, int size)
{
    return key % size;  // Hash index using modulo operation
}

int main() {
    int n;  // Size of the hash table
    cin >> n;
    
    int s;  // Number of product slots
    cin >> s;
    
    // Create a hash table of size 'n' initialized with -1 (empty slots)
    vector<int> hashTable(n, -1);
    
    // Process each key (product code)
    for (int i = 0; i < s; i++) {
        int key;
        cin >> key;
        
        int index = calHash(key, n);  // Calculate the initial hash index
        
        // Linear probing: Find the next available slot
        while (hashTable[index] != -1) {
            index = (index + 1) % n;  // Wrap around using modulo n
        }
        
        // Insert the key into the found empty slot
        hashTable[index] = key;
        
        // Output the index where the key is placed
        cout << index << " ";
    }
    
    cout << endl;  // Print a new line after output
    return 0;
}
