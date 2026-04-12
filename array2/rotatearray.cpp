#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a) { 	// Function to print
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";

}
cout<<endl;
}
void reversePart(int  i,int j,vector<int>& v){
    while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;}
    return;
}
int main(){
    vector <int> v;
     v.push_back(2);
     v.push_back(9);
    v.push_back(0);
    v.push_back(5);
    v.push_back(9);
    v.push_back(4);
    v.push_back(3);

   // Displaying the original array
    display(v);
   int k=9;
   int n=v.size();
   if(k>n) k=k%n;
    reversePart(0,n-k-1,v);
       reversePart(n-k,n-1,v);
          reversePart(0,n-1,v);
       // reverse(v.begin(),v.end());
    display(v);
}
