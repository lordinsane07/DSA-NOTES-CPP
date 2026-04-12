#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& arr,int si,int ei){
    int pivotelement=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotelement) count++;
    }
    int pivotidx=si+count;
    swap(arr[pivotidx],arr[(si+ei)/2]);
    int i=si,j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotelement) i++;
        else if(arr[j]>pivotelement) j--;
        else swap(arr[i++],arr[j--]);
        }
    return arr[pivotidx];
}
void quicksort(vector<int>& arr,int si,int ei){
    int n=arr.size();
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    cout<<"array after partitoning "<<arr[pi]<<": ";
    for(int i=0;i<=ei;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
}
/*#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int si, int ei) {
    int pivotElement = arr[(si + ei) / 2]; // Choosing the middle element as pivot
    int count = 0;

    // Count elements less than or equal to pivot
    for (int i = si; i <= ei; i++) {
        if (i == (si + ei) / 2) continue; // Skip the pivot itself
        if (arr[i] <= pivotElement) count++;
    }
    
    int pivotIdx = si + count; // Find pivot index
    swap(arr[pivotIdx], arr[(si + ei) / 2]); // Move pivot to the correct position
    int i = si, j = ei;

    // Rearranging elements around pivot
    while (i < pivotIdx && j > pivotIdx) {
        if (arr[i] <= pivotElement) i++;
        if (arr[j] > pivotElement) j--;
        else if (i < pivotIdx && j > pivotIdx) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIdx; // Return the final index of the pivot
}

// Quicksort function
void quicksort(int arr[], int si, int ei) {
    if (si >= ei) return; // Base case

    int pi = partition(arr, si, ei); // Partitioning the array
    cout << "Array after partitioning with pivot " << arr[pi] << ": ";
    for (int i = 0; i <= ei; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, si, pi - 1); // Recursively sort the left subarray
    quicksort(arr, pi + 1, ei); // Recursively sort the right subarray
}

int main() {
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, 0, n - 1); // Sort the array

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/