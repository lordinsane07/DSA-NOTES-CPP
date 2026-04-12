#include<iostream>
#include<vector>
using namespace std;
void pointer_3(vector<int>& v){
int lo=0;
int mid=0;
int high=nums.size()-1;
while(mid<=hi){
    if(nums==mid[2]){
        int temp=nums[mid];
        nums[mid]=nums[hi];
        nums[hi]=temp;
        hi--;
    }
    else if(nums[mid]==0){
        int temp=nums[mid];
        nums[mid]=nums[lo];
        nums[lo]=temp;
        lo++;
        mid++ ;
    }
    else {
        mid++ ;
    }
    return;
} 
}
int main(){
    vector <int> v;
     v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
     for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";}
     cout<<endl;
     pointer_3(v);
      for(int j=0;j<v.size();j++){
       cout<<v[j]<<" ";}
       cout<<endl;
       return 0;
}