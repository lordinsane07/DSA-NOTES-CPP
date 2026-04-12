#include<iostream>
using namespace std;
int main(){
 int n;
 cout << "Enter the number of rows : ";
 cin >> n;
 int a[n][n];
 cout << "Enter the matrix elements : ";
 for(int i = 0 ; i < n ; i++){
 for(int j = 0 ; j < n ; j++){
 cin >> a[i][j];
 }
 }
 cout << "The elements of the middle row and middle column are as follows :"<<endl;
 for(int i = 0 ; i < n ; i++)
 {
 for(int j = 0 ; j < n ; j++){
 if(i == n/2 or j == n/2)cout<<a[i][j]<<" ";
 
 else
    cout<<" "<<" ";
 }
 cout<<endl;}
}