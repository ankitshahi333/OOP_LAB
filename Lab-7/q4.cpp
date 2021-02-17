#include <iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout << "Inside Base Class"<<endl;
    }
};
class B:public A
{
    public:
    void show()
    {
        cout << "Inside Derived class"<<endl;
    }
};
int main()
{
A* a; 
B b; 
a = &b;
a->show();
return 0;
}