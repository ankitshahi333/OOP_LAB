#include<stdio.h>

struct student{
char name[50];
int roll;
float marks;
char addr[50];

};
int main(){
struct student s[50];
int i,n;
printf("Enter the no. of students\n");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter name,roll,marks and address for student %d\n",i+1);
scanf("%s%d%f%s",s[i].name,&s[i].roll,&s[i].marks,s[i].addr);
}

printf("\nEnter entered details are:\n");
for(i=0;i<n;i++){
printf("%s\t%d\t%f\t%s\n",s[i].name,s[i].roll,s[i].marks,s[i].addr);
}


return 0;
}
