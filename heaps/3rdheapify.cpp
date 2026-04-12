#include<iostream>
#include<vector>
using namespace std;

// Function to maintain the max-heap property
void heapify(int i, vector<int>& arr, int n) {
    int largest = i;
    int left = 2 * i + 1;  // Left child index
    int right = 2 * i + 2;  // Right child index

    // If the left child exists and is larger than the current largest
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // If the right child exists and is larger than the current largest
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // If the largest is not the current node, swap and heapify the affected subtree
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(largest, arr, n);  // Recursively heapify the affected subtree
    }
}

// Function to build the max-heap
void buildMaxHeap(vector<int>& arr, int n) {
    // Start from the last non-leaf node and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(i, arr, n);
    }
}

int main() {
    int n;
    cin >> n;  // Number of plants

    vector<int> arr(n);
    
    // Read the heights of the plants
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Build the max-heap
    buildMaxHeap(arr, n);

    // Output the heap in level order (which is the array itself after heapification)
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Output the squared values of the heap elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] * arr[i] << " ";
    }
    cout << endl;

    return 0;
}
