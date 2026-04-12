#include<iostream>
#include<vector>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void heapify(int i, int arr[], int n) {
    int left = 2 * i + 1;  // Left child index
    int right = 2 * i + 2; // Right child index
    int largest = i; // Assume the current node is the largest
    
    // Check if left child exists and is larger than the current node
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    
    // Check if right child exists and is larger than the current largest
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    
    // If the largest is not the current node, swap and continue heapifying
    if (largest != i) {
        swap(arr[i], arr[largest]);  // Swap the values
        
        // Recursively heapify the affected subtree
        heapify(largest, arr, n);
    }
}

int main() {
    int arr[] = {10, 20, 5, 15, 25}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    print(arr, n); // Print the original array

    // Start from the last non-leaf node and heapify all the nodes upwards
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(i, arr, n);  // Heapify each node starting from the last non-leaf node
    }

    print(arr, n); // Print the array after heapifying
}
