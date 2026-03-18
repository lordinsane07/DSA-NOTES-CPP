1class Node {
2public:
3    int key, value, cnt;
4    Node* next;
5    Node* prev;
6
7    Node(int key_, int value_) {
8        key = key_;
9        value = value_;
10        cnt = 1;
11        next = prev = NULL;
12    }
13};
14
15class List {
16public:
17    int size;
18    Node* head;
19    Node* tail;
20
21    List() {
22        head = new Node(-1, -1);
23        tail = new Node(-1, -1);
24        head->next = tail;
25        tail->prev = head;
26        size = 0;
27    }
28
29    void addFront(Node* node) {
30        Node* temp = head->next;
31        head->next = node;
32        node->prev = head;
33        node->next = temp;
34        temp->prev = node;
35        size++;
36    }
37
38    void removeNode(Node* node) {
39        Node* prevnode = node->prev;
40        Node* nextnode = node->next;
41        prevnode->next = nextnode;
42        nextnode->prev = prevnode;
43        size--;
44    }
45};
46
47class LFUCache {
48private:
49    unordered_map<int, Node*> keyNode;
50    unordered_map<int, List*> freqList;
51    int capacity;
52    int minfreq;
53    int currsize;
54
55    void updateFreq(Node* node) {
56        int freq = node->cnt;
57        freqList[freq]->removeNode(node);
58
59        if (freq == minfreq && freqList[freq]->size == 0)
60            minfreq++;
61
62        node->cnt++;
63
64        if (freqList.find(node->cnt) == freqList.end())
65            freqList[node->cnt] = new List();
66
67        freqList[node->cnt]->addFront(node);
68        keyNode[node->key] = node;
69    }
70
71public:
72    LFUCache(int capacity) {
73        this->capacity = capacity;
74        minfreq = 0;
75        currsize = 0;
76    }
77
78    int get(int key) {
79        if (keyNode.find(key) == keyNode.end())
80            return -1;
81
82        Node* node = keyNode[key];
83        updateFreq(node);
84        return node->value;
85    }
86
87    void put(int key, int value) {
88        if (capacity == 0)
89            return;
90
91        if (keyNode.find(key) != keyNode.end()) {
92            Node* node = keyNode[key];
93            node->value = value;
94            updateFreq(node);
95            return;
96        }
97
98        if (currsize == capacity) {
99            List* list = freqList[minfreq];
100            Node* nodeToRemove = list->tail->prev;
101            keyNode.erase(nodeToRemove->key);
102            list->removeNode(nodeToRemove);
103            currsize--;
104        }
105
106        currsize++;
107        minfreq = 1;
108
109        if (freqList.find(minfreq) == freqList.end())
110            freqList[minfreq] = new List();
111
112        Node* newnode = new Node(key, value);
113        freqList[minfreq]->addFront(newnode);
114        keyNode[key] = newnode;
115    }
116};