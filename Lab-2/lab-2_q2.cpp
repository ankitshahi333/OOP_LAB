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

       cout<<name<<"\t"<<roll<<"\t"<<marks<<"\t"<<addr<<endl;
    }
};

int main()
{
    student s[50];
    int n;
    cout<<"Enter the no. of students:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s[i].getdata();
    }
    cout<<"entered details are::"<<endl;
    for(int i=0;i<n;i++)
    {
        s[i].showdata();
    }

    return 0;
}

