#include <iostream>
#include <cmath> // For squaring the elements
using namespace std;

// Function to swap elements
void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

// Function to heapify the max heap (to maintain max-heap property)
void maxHeapify(int arr[], int n, int i) {
    while (i < n) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[largest] < arr[left]) {
            largest = left;
        }

        if (right < n && arr[largest] < arr[right]) {
            largest = right;
        }

        if (largest != i) {
            swap(arr, largest, i);
            i = largest;
        } else {
            break;
        }
    }
}

// Function to build the max heap from an unsorted array
void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

// Function to insert a new element into the max heap
void insertIntoMaxHeap(int arr[], int &n, int data) {
    arr[n] = data;
    n = n + 1;
    int index = n - 1;

    while (index > 0) {
        int parent = (index - 1) / 2;
        if (arr[parent] < arr[index]) {
            swap(arr, parent, index);
            index = parent;
        } else {
            return;
        }
    }
}

// Function to print the max heap in level order
void printMaxHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to print squared values of the heap elements
void printSquaredHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] * arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Reading input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Build the max heap from the input
    buildMaxHeap(arr, n);

    // Output the max heap in level order
    printMaxHeap(arr, n);

    // Output the squared values of each element in the max heap
    printSquaredHeap(arr, n);

    return 0;
}
