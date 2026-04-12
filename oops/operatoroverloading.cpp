#include<iostream>
using namespace std;
class Complex{
    private:
    int pri;
    public:
    int real;
    int imag;
    friend Complex operator+(Complex &c1,Complex &c2);
    friend class primenumber;
         Complex operator -(Complex &c1){//this operation overloading 
        Complex c3;
        c3.imag=c1.imag-this->imag;
        c3.real=c1.real-this->real;
        return c3;
    }
};
class primenumber{//friend class
    void show(Complex &c){
        c.priv=10;
    }
};
Complex operator+(Complex &c1,Complex &c2){
        Complex c3;
        c3.imag=c1.imag+c2.imag;
        c3.real=c1.real+c2.real;
        return c3;
}

int main(){
   Complex c1,c2;
   c1.real=5;
   c1.imag=7;
   c2.real=12;
   c2.imag=15;
   Complex c3=c1+c2;
   cout<<"c1="<<c3.real<<"+"<<c3.imag<<"i"<<endl;
   // Complex a1,a2;
    //a1.imag=10;
   // a1.real=20;
    //a2.imag=12;
    //a2.real=11;
    //Complex a3=a2+a1;
  //  Complex a3=a1.add(&a2);
  //  a3=a1+a2;
    //cout<<a3.real<<" real" <<" "<<a3.imag<<" imaginary"<<" ";
}//this operation overloading 