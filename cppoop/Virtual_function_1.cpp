# include <bits/stdc++.h>
using namespace std;
class CWH
{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r)
    {
        title = s;
        rating  = r;
    }
    virtual void display() 
    {
        cout<<"Gandu";
    };
};

class CWHvideo : public CWH
{
    public:
    float videolength;
    CWHvideo(string s,float r,float vl) : CWH(s,r)
    {   
        videolength = vl;
    }
    void display()
    {
        cout<<videolength<<", Title: "<<title<<", Rating: "<<rating<<endl;
    }
};

class CWHText : public CWH
{
    public:
    int word;
    CWHText(string s,float r,int wc) : CWH(s,r)
    {   
        word = wc;
    }
    void display()
    {
        cout<<word<<", Title: "<<title<<", Rating: "<<rating<<endl;
    }
};

int main()
{
    string title = "Toturial";
    float rating = 4.5;
    int videolength = 5.20;
    CWHvideo v(title,rating,videolength);


    string title1 = "Toturial Python";
    float rating1 = 4.5;
    int word = 433;
    CWHText v1(title1,rating1,word);
    CWH* TUT[2];
    TUT[0] = &v;
    TUT[1] = &v1;
    TUT[0]->display();
    TUT[1]->display();

}