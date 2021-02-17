#include <iostream>

using namespace std;

template<class T>
T addition(T x,T y)
{
    return x+y;
}

int main()
{
int a,b;
float p,q;
cout<<"Enter two integer numbers::"<<endl;
cin>>a>>b;
cout<<"Enter two float numbers::"<<endl;
cin>>p>>q;

cout<<"Sum of two intergers= "<<addition(a,b)<<endl;
cout<<"Sum of two float numbers="<<addition(p,q)<<endl;

return 0;

}