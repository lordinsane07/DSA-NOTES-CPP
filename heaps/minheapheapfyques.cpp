#include <iostream>
#include <iomanip>
using namespace std;

// Function to swap two integers
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Min-heapify function to maintain the min-heap property
void minHeapify(int heap[], int size, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] < heap[smallest])
        smallest = left;
    if (right < size && heap[right] < heap[smallest])
        smallest = right;
    
    if (smallest != i) {
        swap(heap[i], heap[smallest]);
        minHeapify(heap, size, smallest);
    }
}

// Build min-heap by heapifying from the bottom up
void buildMinHeap(int heap[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        minHeapify(heap, size, i);
    }
}

// Insert an element into the heap and re-heapify to maintain min-heap property
void insertElement(int heap[], int &size, int value) {
    heap[size] = value;
    size++;
    
    int i = size - 1;
    while (i != 0 && heap[(i - 1) / 2] > heap[i]) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Display the min-heap structure
void displayMinHeap(int heap[], int size) {
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

// Calculate the average of elements in the heap
double averageOfElements(int heap[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += heap[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    int n;
    cin >> n;

    int *heap = new int[n]; // Dynamic memory allocation for heap
    int size = 0;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertElement(heap, size, value);
    }
    
    buildMinHeap(heap, size);
    displayMinHeap(heap, size);

    double average = averageOfElements(heap, size);
    cout << "Average: " << fixed << setprecision(2) << average << endl;

    delete[] heap; // Free dynamically allocated memory
    return 0;
}

