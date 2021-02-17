#include<iostream>
using namespace std;

class student
{
    protected:
    char name[50];
    int roll;
    char addr[50];
    public:
    void getdata()
    {
        cout<<"Enter name,roll and address::"<<endl;
        cin>>name>>roll>>addr;
    }

};

class internal: virtual public student
{
    protected:
    float marks1,marks2,marks3;

    public:
    void getdata()
    {
        cout<<"Enter internal marks in three subject::"<<endl;
        cin>>marks1>>marks2>>marks3;
    }

    void showdata()
    {
        cout<<"Marks1:: "<<marks1<<endl<<
        "Marks2:: "<<marks2<<endl<<
        "Marks3:: "<<marks3<<endl;
    }

};

class external: virtual public student
{
    protected:
    float marks4,marks5,marks6;

    public:
    void getdata()
    {
        cout<<"Enter external marks in three subject::"<<endl;
        cin>>marks4>>marks5>>marks6;
    }

    void showdata()
    {
        cout<<"Marks4:: "<<marks4<<endl<<
        "Marks5:: "<<marks5<<endl<<
        "Marks6:: "<<marks6<<endl;
    }

};

class result:public internal,public external
{
    protected:
    float sum,percentage;
    public:
    void calculate()
    {
        sum=marks1+marks2+marks3+marks4+marks5+marks6;
        percentage=(sum/600)*100;
    }
    void showdata()
    {
        cout<<"\n\t\t\t\tResult\n";
        cout<<"Name::"<<name<<endl<<
        "Roll::"<<roll<<endl<<
        "Address::"<<addr<<endl;
        internal::showdata();
        external::showdata();
        cout<<"Total::"<<sum<<endl<<
        "Percentage::"<<percentage<<endl;
    }
};

int main()
{
    result r;
    r.student::getdata();
    r.internal::getdata();
    r.external::getdata();
    r.result::calculate();
    r.result::showdata();
    return 0;
}