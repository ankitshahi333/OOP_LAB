#include<iostream>

using namespace std;

void rethrowing(int x,int y)
{
    try
    {
        if(y!=0)
        cout<<"Result of x/y="<<x/y<<endl;
        else
        throw y;
    }
    catch(int y)
    {
        cout<<"Cannot handle this exception: Rethrowing"<<endl;
        throw;
    }
    
}

int main()
{
    int a,b;
    cout<<"Enter value of a and b:: "<<endl;
    cin>>a>>b;
    try
    {
        rethrowing(a,b);
    }
    catch(int p)
    {
        cout<<"Zero divide exception caught"<<endl;
    }
    
    return 0;
}