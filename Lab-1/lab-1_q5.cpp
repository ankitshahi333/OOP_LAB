#include<iostream>
using namespace std;

float volume(float l=10,float b=6.5,float h=3.75){
return l*b*h;
}
int main()
{
    cout<<"Volume of cuboid with default values=";
    cout<<volume()<<endl;
    cout<<"Volume of cuboid with l=15,b=6.5 and h=3.75=";
    cout<<volume(15)<<endl;
    cout<<"Volume of cuboid with l=20,b=12.5 and h=8.25=";
    cout<<volume(20,12.5,8.25)<<endl;

    return 0;
}
