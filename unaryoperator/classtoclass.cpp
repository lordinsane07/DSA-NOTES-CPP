#include<iostream>
using namespace std;
class invent2;
class invent1{
    int code;
    int item;
    float price;
    public:
    invent1(int a,int b,float c){
        code=a;
        item=b;
        price=c;
    }
    void putdata(){
        cout<<"Code"<<code<<"item"<<item<<"price"<<price;
    }
    int getcode(){
        return code;
    }
    int getitem(){
        return item;
    }
    float getprice(){
        return price;
    }
    operator float(){
        return (item*price);
    }
};
class invent2{
    int code;
    float value;
    public:
    invent2(){
        code=0;
        value=0;
    }
    invent2(int x,float y){
        code=x;
        value=y;
    }
    void putdata(){
        cout<<"Code"<<code<<"value"<<value;
    }
    invent2(invent1 p){
        code=p.getcode();
        value=p.getitem()*p.getprice();
    }
};
int main(){
    invent1 s1(100,5,140.0);
    invent2 d1;
    float tv;
    tv=s1;
    d1=s1;
    s1.putdata();
    cout<<tv;
    d1.putdata();
}