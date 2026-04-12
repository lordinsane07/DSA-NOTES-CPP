#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("m.txt");
    fout << "Hello, world!" << endl;
     fout << "Hello, !" << endl;
      fout << "!" << endl;
    fout.close();
    ifstream fin;
    fin.open("m.txt");
    string line;
    while(getline(fin,line)){
        cout << line << endl;
    }
    fin.close();
}
/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("z1.txt");
    fout<<"Hello India\n";
    fout<<"Hello Mrittick\n";
    fout<<"Hello Bhai\n";
    fout.close();
    ifstream fin;
    fin.open("z1.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
}*/