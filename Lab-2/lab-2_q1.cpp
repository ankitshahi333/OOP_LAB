#include<iostream>
using namespace std;

class student
{
char name[50];
int roll;
float marks;
char addr[50];
public:
    void getdata()
    {
        cout<<"Enter name,roll,marks and address of a student:"<<endl;
        cin>>name>>roll>>marks>>addr;
    }
    void showdata()
    {
       cout<<"entered details are::"<<endl;
       cout<<name<<"\t"<<roll<<"\t"<<marks<<"\t"<<addr<<endl;
    }
};

int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}
