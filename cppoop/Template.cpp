# include <iostream>
using namespace std;
template <class T>
class Vector
{
    public:
    T* arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T sum(Vector&a)
    {
        T d = 0;
        for(int i=0;i<size;i++)
        {
            d = d + this->arr[i] * a.arr[i];
        }
        return d;
    }
    ~Vector()
    {
        delete []arr;
    }
};

int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    Vector<float> v2(3);
    v2.arr[0] = 1.2;
    v2.arr[1] = 0.0;
    v2.arr[2] = 1.0;

    float ans = v1.sum(v2);
    cout<<ans;
}