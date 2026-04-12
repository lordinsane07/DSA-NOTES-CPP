#include <iostream>
#include <vector>
using namespace std;

int rec = 1;

void print(vector<int>& res) {
    cout << "After iteration " << rec << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    rec++;
}

void conquer(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            res[k++] = a[i++];
        } else {
            res[k++] = b[j++];
        }
    }
    while (i < a.size()) {
        res[k++] = a[i++];
    }
    while (j < b.size()) {
        res[k++] = b[j++];
    }
    print(res);
}

void divide(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return;
    
    int mid = n / 2;
    vector<int> a(mid), b(n - mid);
    
    for (int i = 0; i < mid; i++) {
        a[i] = arr[i];
    }
    for (int i = 0; i < n - mid; i++) {
        b[i] = arr[i + mid];
    }
    
    divide(a);
    divide(b);
    
    conquer(a, b, arr);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "Given Array" << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    divide(arr);
    
    cout << "\nSorted Array" << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
