#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n+1,0);
    vector<int> ans(n+1,0); 
    for(int i=1;i<=n;i++)
{
        cin>>arr[i];
        ans[arr[i]]=i;
}
for(int i=1;i<=n;i++){
    cout<<ans[i]<<" ";
}

}