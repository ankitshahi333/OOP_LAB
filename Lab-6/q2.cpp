#include<iostream>
using namespace std;

class student
{
    protected:
    char name[50];
    int age;
    
    public:
    void getdata()
    {
        cout<<"Enter name and age::"<<endl;
        cin>>name>>age;
    }

};

class employee
{
    protected:
    char addr[50];
    int emp_id;
    public:
    void getdata()
    {
        cout<<"Enter address and employee id::"<<endl;
        cin>>addr>>emp_id;
    }
};

class officer:public student,public employee
{
    protected:
    int work_hrs;
    public:
    void getdata()
    {
        cout<<"Enter working hours::"<<endl;
        cin>>work_hrs;
    }
    void showdata()
    {
        cout<<"Name:: "<<name<<endl
        <<"Age:: "<<age<<endl
        <<"Address:: "<<addr<<endl
        <<"Employee ID:: "<<emp_id<<endl
        <<"Work hours:: "<<work_hrs<<endl;
    }
};

int main()
{
    officer o;
    o.student::getdata();
    o.employee::getdata();
    o.officer::getdata();
    o.showdata();
    return 0;
}