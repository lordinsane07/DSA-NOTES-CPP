#include<iostream>
using namespace std;
void pip(int n){
if(n==0) return;
cout<<"Pre"<<n<<endl;//first call ka pehla ka kaam
pip(n-1);//first call
cout<<"In"<<n<<endl;//first call ke baad ka kaam
pip(n-1);//last call
cout<<"Post"<<n<<endl;

}
int main(){
    pip(4);
}