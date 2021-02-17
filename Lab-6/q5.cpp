#include<iostream>
using namespace std;

class Base1
{
    public:
    Base1()
    {
        cout<<"Inside base1 constructor"<<endl;
    }
    ~Base1()
    {
        cout<<"Inside base1 destructor"<<endl;
    }
};

class Base2
{
    public:
    Base2()
    {
        cout<<"Inside base2 constructor"<<endl;
    }
    ~Base2()
    {
        cout<<"Inside base2 destructor"<<endl;
    }
};


class Derv:public Base1,public Base2
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