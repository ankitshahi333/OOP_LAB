#include<stdio.h>

struct complex{

float real;
float imag;

};

int main(){
struct complex c1,c2,c3;
printf("Enter first complex num:");
scanf("%f%f",&c1.real,&c1.imag);
printf("Enter second complex num:");
scanf("%f%f",&c2.real,&c2.imag);
c3.real=c1.real+c2.real;
c3.imag=c1.imag+c2.imag;
printf("Sum=%.2f + %.2f i",c3.real,c3.imag);

return 0;
}
