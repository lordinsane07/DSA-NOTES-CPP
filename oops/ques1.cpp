#include<iostream>
using namespace std;
class Book{
    public:
    char name;
    int price;
    int noofpages;
    int countbooks(int p){
        if(p>price)
        return 1;
        else
        return 0;
    }
    bool isbookpresent(char book){
        if(book==name)
        return true;
        else
        return false;
    }
};
int main(){
    Book harrypotter;
    harrypotter.name='h';
    harrypotter.price=1000;
    harrypotter.noofpages=1000;
    cout<<harrypotter.countbooks(10100)<<endl;
    cout<<harrypotter.isbookpresent('B');
}