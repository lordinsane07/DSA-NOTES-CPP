#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a) { 	// Function to print
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";

}
cout<<endl;
}
int main(){
    vector <int> v1;
     v1.push_back(2);
     v1.push_back(9);
    v1.push_back(0);
    v1.push_back(5);
    v1.push_back(9);
   // Displaying the original array
    display(v1);
    vector<int> v2(v1.size());
    for(int i=0;i<v2.size()-1;i++){
        v2[i]=v1[v1.size()-1-i];
    }
    //Displaying the reversed array using loop

    display(v2);

    }