#include<iostream>
using namespace std;

class complex
{
    float real;
    float imag;
public:
    complex()
    {
        real=0;
        imag=0;
    }

    complex(float a,float b)
    {
        real=a;
        imag=b;
    }

    complex(complex &c)
    {
        real=c.real;
        imag=c.imag;
    }

    void showdata()
    {
        cout<<"SUM= "<<real<<" + j "<<imag<<endl;
    }

    ~complex()
    {
        cout<<"Destroyed"<<endl;
    }
};

int main()
{
    complex c1;
    complex c2(1.6,3.3);
    complex c3(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
