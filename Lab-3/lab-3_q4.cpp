//CPP to find the sum of two complex numbers using the concept of the overloading binary + operator using non-member/friend function.
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
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    void getdata()
    {
        cout<<"Enter complex number:"<<endl;
        cin>>real>>imag;
    }

    void showdata()
    {
        cout<<"Sum="<<real<<" + i "<<imag<<endl;
    }
    friend complex operator+(complex,complex);

};

complex operator +(complex cc1,complex cc2)
    {
        complex temp;
        temp.real=cc1.real+cc2.real;
        temp.imag=cc1.imag+cc2.imag;
        return temp;
    }
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.showdata();
    return 0;
}
