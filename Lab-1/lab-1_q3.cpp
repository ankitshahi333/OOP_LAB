#include<iostream>
#define pi 3.14
using namespace std;

float area(float m){
return pi*m*m;
}

float area(float p,float q){
return p*q;
}


int main(){
float r,l,b;
cout<<"Enter radius of circle"<<endl;
cin>>r;
cout<<"Enter length and breadth"<<endl;
cin>>l>>b;
cout<<"Area of circle="<<area(r)<<endl;
cout<<"Area of rectangle="<<area(l,b);
return 0;
}
