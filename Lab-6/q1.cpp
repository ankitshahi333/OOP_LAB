#include<iostream>
using namespace std;

class student
{
    protected:
    char name[50];
    int age;
    char addr[50];

    public:
    void getdata()
    {
        cout<<"Enter name, age and address ::"<<endl;
        cin>>name>>age>>addr;
    }

};

class leader : public student
{
    protected:
    int id_num;
    char org_name[50];
    public:

    void getdata()
    {
        cout<<"Enter id number and organization name::"<<endl;
        cin>>id_num>>org_name;
    }

    void showdata()
    {
        cout<<"Name::::"<<name<<endl
        <<"Age::::"<<age<<endl
        <<"Address::::"<<addr<<endl
        <<"ID Number::::"<<id_num<<endl
        <<"Organization name::::"<<org_name<<endl;
    }

};

int main()
{
    leader l;
    l.student::getdata();
    l.leader::getdata();
    l.showdata();
    return 0;

}