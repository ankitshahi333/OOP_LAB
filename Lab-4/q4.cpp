//WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
//user defined to user defined conversion by writing conversion routine in destination class.
#include<iostream>
#include<cmath>

using namespace std;

class cartesian //source class is defined first for CR(constructor) in destination class
{
    float x,y;

    public:

    cartesian()
    {
        x=0;
        y=0;
    }
    cartesian(float a,float b)
    {
        x=a;
        y=b;
    }
    void input()
    {
        cout<<"Enter a cartesian coordinate:"<<endl;
        cin>>x>>y;
    }

    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
};

class polar
{
    float r,theta;

    public:

    polar()
    {
        r=0;
        theta=0;
    }
    polar(cartesian c)
    {
        float i,j;
        i=c.getx();//retrieves value of x from source class
        j=c.gety();//retrieves value of y from sources class
        r=sqrt(pow(i,2)+pow(j,2));
        theta=atan(j/i);
        
    }

    void output()
    {
        cout<<"In polar form, ("<<r<<", "<<theta<<")"<<endl;
    }
};

int main()
{
    cartesian c;
    polar p;
    c.input();
    p=c;
    p.output();
    return 0;
}