#include<iostream>
using namespace std;
int main()
{
int a=97,*iptr=&a;
char ch='B',*cptr=&ch;
cptr=reinterpret_cast <char *> (iptr);
cout<<"Value at cptr:"<<*cptr<<endl;
return 0;
}
