#include<iostream>

using namespace std;

template<class T>
class rectangle
{
    T l,b;
    public:
    rectangle()
    {
        l=0;
        b=0;
    }

    rectangle(T x,T y)
    {
        l=x;
        b=y;
    }

    T area()
    {
        return l*b;
    }

    void display()
    {
        cout<<"Area of rectangle with l="<<l<<" and b="<<b<<" ::"<<area()<<endl;
    }

};

int main()
{
    rectangle<int>r1(5,3);
    rectangle<float>r2(5.6,3.2);
    r1.display();
    r2.display();
    return 0;
}