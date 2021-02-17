#include<iostream>
#include<typeinfo>
using namespace std;
class Base 
{ 
    virtual void func() {} 
};
class Derv: public Base 
{ 

};

int main()
{
 Base *b = new Derv();
 Derv *d = dynamic_cast<Derv*>(b);
 if(d != NULL)
 cout << "works";
 else
cout << "cannot cast B* to D*";
 return 0;
}
