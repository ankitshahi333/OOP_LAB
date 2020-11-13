//Write a program in CPP to convert the distance in meters entered by the user into distance in feet and
//inch using the concept of basic to user defined data conversion.
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
    Distance(float x)  //Here conversion routine is paramiterized constructor
    {
        float temp;
        temp=x*3.2808;
        feet=int(temp);
        inch=(temp-feet)*12;
        
    }
    void output()
    {
        cout<<"After conversion::\t"<<feet<<" feet\t"<<inch<<" inch"<<endl;
    }
};

int main()
{
    Distance d;
    float meter;
    cout<<"Enter distance in meters:"<<endl;
    cin>>meter;
    d=meter;
    d.output();
    return 0;
}