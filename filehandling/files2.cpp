#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5);
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    ofstream fout;
    fout.open("zero.txt");
    fout<<"Original Data"<<endl;
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
};
fout<<"\nSorted data"<<endl;
sort(arr.begin(),arr.end());
for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
};
fout.close();
}