1class Node{
2    public:
3    int key,val;
4    Node* next;
5    Node* prev;
6    Node(){
7        key=val=-1;
8    next=prev=nullptr;
9    }
10    Node(int k,int value){
11            key=k;
12            val=value;
13             next=prev=nullptr;
14    }
15};
16class LRUCache {
17    unordered_map<int,Node*> mpp;
18    int cap;
19    Node* head;
20    Node* tail;
21    void deleteNode(Node* node){
22        Node* prevNode=node->prev;
23        Node* nextNode=node->next;
24        prevNode->next=nextNode;
25        nextNode->prev=prevNode;
26
27    }
28    void insertNode(Node* node){
29      Node* nextNode=head->next;
30      head->next=node;
31      nextNode->prev=node;
32      node->prev=head;
33      node->next=nextNode;
34
35    }
36  public:
37
38  LRUCache(int capacity) {
39    cap=capacity;
40    mpp.clear();
41    head=new Node();
42    tail=new Node();
43    head->next=tail;
44    tail->prev=head;
45  }
46
47  int get(int key_) {
48        if(mpp.find(key_)==mpp.end()) return -1;
49        Node* node=mpp[key_];
50        int val=node->val;
51        deleteNode(node);
52        insertNode(node);
53        return val;
54  }
55
56  void put(int key_, int value) {
57    if(mpp.find(key_)!=mpp.end()){
58        Node* node=mpp[key_];
59        node->val=value;
60        deleteNode(node);
61        insertNode(node);
62        return;
63    }
64    if(mpp.size()==cap){
65        Node* node=tail->prev;
66        mpp.erase(node->key);
67        deleteNode(node);
68    }
69    Node* newnode=new Node(key_,value);
70    mpp[key_]=newnode;
71    insertNode(newnode);
72  }
73};
74