#include<iostream>
#include<string>
using namespace std;
class A{
    private:
    int a_ka_private;//can not be accessed or inherited
    protected://can be inherited but not accesedd outside
    int a_ka_protected;
    public://can be accessed aswell as inherited
    int a_ka_public;
};
class B : public A{
    public:
    int b_ka_public;
   
    
}
//security->   private>protected>public
//security can be chnged from low to high but high to ow 