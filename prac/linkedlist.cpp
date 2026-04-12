#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert a node at the end of the list
    void insert(int newdata) {
        Node* new_node = new Node(newdata);
        if (head == nullptr) {
            head = new_node;
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    // Insert a node at the beginning of the list
    void begin(int newdata) {
        Node* new_node = new Node(newdata);
        new_node->next = head;
        head = new_node;
    }

    // Delete a node by value
    void deletenode(int value) {
        if (head == nullptr) {
            return;
        }
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }
        if (temp->next == nullptr) {
            cout << "Not found\n";
        }
        else {
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
    }

    // Delete a node by index
    void deleteAtIndex(int index) {
        if (head == nullptr || index < 0) {
            cout << "Invalid index\n";
            return;
        }

        if (index == 0) {  // Deleting the head node
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        int count = 0;
        while (temp != nullptr && count < index - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr || temp->next == nullptr) {
            cout << "Index out of range\n";
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    // Insert a node at a specific index
    void insertAtIndex(int index, int newdata) {
        if (index < 0) {
            cout << "Invalid index\n";
            return;
        }

        Node* new_node = new Node(newdata);

        if (index == 0) {  // Inserting at the head
            new_node->next = head;
            head = new_node;
            return;
        }

        Node* temp = head;
        int count = 0;
        while (temp != nullptr && count < index - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr) {
            cout << "Index out of range\n";
            return;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(40);

    cout << "Original List: ";
    ll.display();

    ll.begin(0);
    cout << "After inserting 0 at the beginning: ";
    ll.display();

    ll.deletenode(40);
    cout << "After deleting 40: ";
    ll.display();

    ll.deleteAtIndex(1);  // Delete node at index 1
    cout << "After deleting node at index 1: ";
    ll.display();

    ll.insertAtIndex(1, 25);  // Insert 25 at index 1
    cout << "After inserting 25 at index 1: ";
    ll.display();

    ll.insertAtIndex(0, 5);  // Insert 5 at the beginning
    cout << "After inserting 5 at index 0: ";
    ll.display();

    return 0;
}
