//Write a program in CPP to convert the distance in feet and inch entered by the user into distance in
//meters using the concept of user defined to basic data conversion.
#include<iostream>
using namespace std;

class Distance
{
float feet;
float inch;
public:
Distance()
{
    feet=0;
    inch=0;
}
Distance(float a,float b)
{
    feet=a;
    inch=b;
}
void input()
{
    cout<<"Enter distance in feet and inch::"<<endl;
    cin>>feet>>inch;
}

operator float() //Here conversion routine is operator function
{
    float meter=inch/12;
    meter=meter + feet;
    return(meter/3.2808);
}

};

int main()
{
    Distance d;
    float m;
    d.input();
    m=d;
    cout<<"After conversion:: "<<m<<" meter"<<endl;
    return 0;
}