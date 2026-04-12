#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("file.txt");
    char c;
   // fin>>c;
   c=fin.get();
    while(!fin.eof()){
        cout<<c;
        c=fin.get();
    };
    fin.close();
}
