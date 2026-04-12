#include<iostream>
using namespace std;
template <class T>
class vector{
    T * arr;
    T size;
    public:
    vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v){
        T d = 0;
        for(T i = 0; i < size; i++){
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main(){
    vector <double>v1(3);
    v1.arr[0] = 1; 
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    vector <double>v2(3);
    v2.arr[0] = 0; 
    v2.arr[1] = 1;
    v2.arr[2] = 0;
    int a=v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}