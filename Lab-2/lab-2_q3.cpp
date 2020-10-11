#include<iostream>
using namespace std;

class complex
{
    float real;
    float imag;
public:
    void getdata()
    {
        cout<<"Enter a complex num:"<<endl;
        cin>>real>>imag;
    }
    void showdata()
    {
        cout<<"Sum: "<<real<<" + i "<<imag;
    }

    complex addition(complex a,complex b)
    {
        complex temp;
        temp.real=a.real+b.real;
        temp.imag=a.imag+b.imag;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c3.addition(c1,c2);
    c3.showdata();
    return 0;
}
