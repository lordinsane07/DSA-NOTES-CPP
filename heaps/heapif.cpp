#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to maintain the max-heap property by heapifying
void heapify(vector<char>& heap, int n, int i) {
    int largest = i;  // Assume the current node is the largest
    int left = 2 * i + 1;  // Left child index
    int right = 2 * i + 2; // Right child index

    // If left child is larger than the root
    if (left < n && heap[left] > heap[largest]) {
        largest = left;
    }
    // If right child is larger than the largest so far
    if (right < n && heap[right] > heap[largest]) {
        largest = right;
    }

    // In case of equality, prioritize left child to enforce stable ordering
    if (left < n && heap[left] == heap[largest] && right < n && heap[right] == heap[largest]) {
        largest = left; // Always prioritize left child if both are equal
    }

    // If the largest is not the root, swap and heapify the affected subtree
    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(heap, n, largest);  // Recursively heapify the affected subtree
    }
}

// Function to build the max heap from the input list of characters
void buildMaxHeap(vector<char>& heap, int n) {
    // Start heapifying from the last non-leaf node down to the root
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(heap, n, i);
    }
}

int main() {
    int n;
    cin >> n;  // Number of participants (size of heap)
    
    vector<char> heap(n);
    
    // Read the talent scores (characters)
    for (int i = 0; i < n; i++) {
        cin >> heap[i];
    }
    
    // Step 1: Build the max-heap from the input characters
    buildMaxHeap(heap, n);
    
    // Step 2: Print the heap after all characters have been inserted
    for (char ch : heap) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}
