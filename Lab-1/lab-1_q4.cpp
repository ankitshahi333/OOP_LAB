#include<iostream>
using namespace std;
inline float volumeCuboid(float l, float b,float h){
return l*b*h;
}
int main(){
float b=6.5;
float h=4.25;
cout<<"Length"<<"\t\t"<<"Volume"<<endl<<endl;
for(float l=10;l<60;l+=5){
    cout<<l<<"\t\t"<<volumeCuboid(l,b,h)<<endl;

}

return 0;
}


