#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& pets) {
    for (int i = 0; i < pets.size(); ++i) {
        cout << pets[i]<<" ";
        //if (i != pets.size() - 1) {
          //  cout << " ";
        //}
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    vector<int> pets(N);
    for (int i = 0; i < N; ++i) {
        cin >> pets[i];
    }

    int M, R;
    cin >> M >> R;

       pets.push_back(M);
    printVector(pets);

  
    for (int i = 0; i < pets.size(); ++i) {
        if (pets[i] == R) {
            pets.erase(pets.begin() + i);
            break;
        }
    }
    printVector(pets);

 
}