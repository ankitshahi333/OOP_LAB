#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Inside base constructor"<<endl;
    }
    ~Base()
    {
        cout<<"Inside base destructor"<<endl;
    }
};

class Derv:public Base
{
    public:
    Derv()
    {
        cout<<"Inside derv constructor"<<endl;
    }
    ~Derv()
    {
        cout<<"Inside derv destructor"<<endl;
    }
};

int main()
{
    Derv d;
    return 0;
}