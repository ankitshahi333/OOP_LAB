//WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
//user defined to user defined conversion by writing conversion routine in source class.
#include<iostream>
#include<cmath>
using namespace std;

class polar //destination class is declared first for CR(operator) in source class
{
  float r,theta;

  public:
  polar()
  {
      r=0;
      theta=0;
  }
  polar(float m,float n)
  {
      r=m;
      theta=n;
  }
  void output()
  {
      cout<<"In polar form, ("<<r<<", "<<theta<<")"<<endl;
  }


};

class cartesian
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
    operator polar()
    {
        float rad,ang;
        rad=sqrt(pow(x,2)+pow(y,2));
        ang=atan(y/x);
        return polar(rad,ang);
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