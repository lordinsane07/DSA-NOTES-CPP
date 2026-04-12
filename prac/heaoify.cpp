#include <iostream>
#include <vector>
using namespace std;

// Function to heapify a subtree rooted with node i which is an index in arr[].
// n is the size of the heap.
void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left child
    int right = 2 * i + 2; // right child

    // Check if left child is larger than root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // Check if right child is larger than largest so far
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // Change root, if needed
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Heapify the root.
        heapify(arr, n, largest);
    }
}

// Function to add an element to the max-heap
void addElement(vector<int>& arr, int value) {
    arr.push_back(value); // Add the element at the end
    int i = arr.size() - 1;

    // Fix the max-heap property if it is violated
    while (i != 0 && arr[(i - 1) / 2] < arr[i]) {
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Function to delete the root (maximum element) from the max-heap
void deleteRoot(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        cout << "Heap is empty, cannot delete.\n";
        return;
    }

    // Replace root with the last element
    arr[0] = arr[n - 1];
    arr.pop_back();

    // Heapify the reduced heap
    heapify(arr, arr.size(), 0);
}

// Function to heap sort the array
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Build a max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // One by one extract elements from the heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    cout << "Initial heap: ";
    printArray(arr);

    // Build the initial heap
    for (int i = arr.size() / 2 - 1; i >= 0; i--) {
        heapify(arr, arr.size(), i);
    }

    cout << "Max-Heap array: ";
    printArray(arr);

    // Add an element
    addElement(arr, 15);
    cout << "Heap after adding 15: ";
    printArray(arr);

    // Delete the root
}