#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(vector<int>& heap, int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] < heap[smallest]) {
        smallest = left;
    }

    if (right < n && heap[right] < heap[smallest]) {
        smallest = right;
    }

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        minHeapify(heap, n, smallest);
    }
}

void buildMinHeap(vector<int>& heap, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(heap, n, i);
    }
}

void heapSort(vector<int>& heap) {
    int n = heap.size();
    buildMinHeap(heap, n);

    // Sort the heap in ascending order
    for (int i = n - 1; i >= 0; i--) {
        swap(&heap[0], &heap[i]);
        minHeapify(heap, i, 0);
    }
}

bool isPresent(const vector<int>& heap, int value) {
    for (int i = 0; i < heap.size(); i++) {
        if (heap[i] == value) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> heap(n);

    for (int i = 0; i < n; i++) {
        cin >> heap[i];
    }

    int C;
    cin >> C;

    // Sort the elements in ascending order
    heapSort(heap);

    // Print sorted output
    for (int i = 0; i < n; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;

    // Check for presence of the element C
    if (isPresent(heap, C)) {
        cout << C << " is present" << endl;
    } else {
        cout << C << " is not present" << endl;
    }

    return 0;
}
