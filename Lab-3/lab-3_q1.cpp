//cpp program to overload unary ++ for prefix and postfix increment operation on complex num using MEMBER FUNCTION

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
void showdata()
{
cout<<real<<"+ i "<<imag<<endl;
}

complex operator ++()
{
complex temp;
temp.real=++real;
temp.imag=++imag;
return temp;
}

complex operator ++(int)
{
complex temp;
temp.real=real++;
temp.imag=imag++;
return temp;
}

};

int main()
{
complex c1(3,5),c2(2.5,3.5),c3;
c2=++c1;
c3=c2++;
c1.showdata();
c2.showdata();
c3.showdata();
return 0;
}
