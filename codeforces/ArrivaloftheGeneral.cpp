#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m;
    cin>>m;
    vector<int> arr(m); 
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
        int swaps=0;
        int mx=*max_element(arr.begin(),arr.end());
        int a_max=0;
         while (arr[a_max] != mx) ++a_max;    
        while (a_max>0)
        {
            swap(arr[a_max],arr[a_max-1]);
            --a_max;
            swaps++;
        }
            int mn=*min_element(arr.begin(),arr.end());
            int a_min=m-1;
            while (arr[a_min]!=mn) --a_min;
            while (a_min<m-1)
            {
                swap(arr[a_min],arr[a_min-1]);
            ++a_min;
            swaps++;
            }
            cout<<swaps;
}   