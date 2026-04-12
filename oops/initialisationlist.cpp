#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;
    Bike (int ts,int es=200):tyresize(ts),enginesize(es){}//initialisation list
};
int main(){
    Bike tvs(12);//object created costructor gets call
    Bike honda(10,150);
    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
     cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
}
