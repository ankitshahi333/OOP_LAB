#include<iostream>
#include<cstring>
#include<list>

using namespace std;

int main()
{
    list<string>l;
    char str[100];
    int n;
    cout<<"Enter the value of n="<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        l.push_back(str);
    }
    l.sort();
    cout<<"In alphabetical order::"<<endl;
    while(!l.empty())
    {
        cout<<l.front()<<endl;
        l.pop_front();
    }

    return 0;
}