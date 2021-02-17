#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    c=a-b;

    try
    {
        if(c!=0)
        cout<<"Result of a/c=="<<a/c<<endl;
        else
        throw(c);
    }
    catch(int c)
    {
        cout<<"Exception caught "<<"c="<<c<<endl;
    }
    return 0;
}