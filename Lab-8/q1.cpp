#include<iostream>
#include<cstdlib>
#include<fstream>
#include<iomanip>

using namespace std;

class student
{
    private:
    char name[50],addr[50];
    int roll;
    float marks;
    
   
    public:
    void getdata()
    {
        cout<<"Enter name::";
        cin>>name;
        cout<<"Enter roll::";
        cin>>roll;
        cout<<"Enter marks::";
        cin>>marks;
        cout<<"Enter address::";
        cin>>addr;
        
    }
    void putdata()
    {
        cout<<setw(10)<<name<<setw(15)<<roll<<setprecision(2)<<setw(20)<<marks<<setw(30)<<addr<<endl;
    }
    int getroll()
    {
        return roll;
    }
     
};
 

int main()
{
    student stud;
    fstream inout;
    int m,roll,object,isfound;

    cout<<"Choose an option::::"<<endl;
    cout<<"1.Write records into file:"<<endl;
    cout<<"2.Read records from the file:"<<endl;
    cout<<"3.Update record in the file:"<<endl;
    cout<<"4.Search record of a student:"<<endl;
    cout<<"5.Modify record of a student:"<<endl;
    cout<<"6.Delete record of a student:"<<endl;
    cout<<"7.count the number of objects in file and total file size"<<endl;
    cin>>m;

    switch(m)
    {
        case 1:
        inout.open("record.txt",ios::out);
        int z;
        cout<<"Enter the number of students"<<"\n";
        cin>>z;
        for(int i=1;i<=z;i++)
        {
            stud.getdata();
            inout.write((char*)&stud,sizeof(stud));
        }
        cout<<"File Written!"<<endl;
        inout.close();
        break;


        case 2:
        inout.open("record.txt",ios::in);
        cout<<"Current contents of file"<<endl;
        cout<<setw(10)<<"name"<<setw(15)<<"roll"<<setw(20)<<"marks"<<setw(30)<<"address"<<endl;
        while(inout.read((char *)&stud,sizeof(stud)))
        {
            stud.putdata();
        }
        inout.close();
        break;


        case 3:
        inout.open("record.txt",ios::app);
        cout<<"Add Student Record:"<<endl;
        stud.getdata();
        inout.write((char *)&stud,sizeof(stud));
        cout<<"Record Added!!!"<<endl;
        inout.close();
        break;

        case 4:
        inout.open("record.txt",ios::in);
        isfound=0;
        cout<<"Enter Roll number:"<<endl;
        cin>>roll;
        inout.seekg(0,ios::beg);
        while(inout.read((char *)&stud,sizeof(stud)))
        {
            if(stud.getroll()==roll)
            {
            isfound=1;
            cout<<"Searched record!:"<<endl;
            cout<<setw(10)<<"name"<<setw(15)<<"roll"<<setw(20)<<"marks"<<setw(30)<<"address"<<"\n";
            stud.putdata();
            break;
            }
        }
        if(isfound==0)
        cout<<"The record with the roll number "<<roll<<" is not found!"<<endl;
        inout.close();
        break;


        case 5:
        inout.open("record.txt",ios::out|ios::in|ios::ate);
        int location;
        object=isfound=0;
        cout<<"Enter Roll number:"<<endl;
        cin>>roll;
        inout.seekg(0,ios::beg);
        while(inout.read((char *)&stud,sizeof(stud)))
        {
            ++object;
            if(stud.getroll()==roll)
            {
                isfound=1;
                location=(object-1)*sizeof(stud);
                inout.seekp(location,ios::beg);
                cout<<"Enter new data"<<endl;
                stud.getdata();
                inout.write((char *)&stud,sizeof(stud))<<flush;
                cout<<"Record Modified!!!"<<endl;
                break;
            }
        }       
        if(isfound==0)
        cout<<"The record with the roll number "<<roll<<"is not found!"<<endl;
        inout.close();
        break;

        case 6:
        inout.open("record.txt",ios::in);
        student st[48];
        int i,j;
        i=0;
        cout<<"Enter Roll number:"<<endl;
        cin>>roll;
        inout.seekg(0,ios::beg);
        while(inout.read((char *)&st[i],sizeof(st[i])))
        {
            ++i;
        }
        j=i;
        inout.close();
        inout.open("record.txt",ios::out);
        for(i=0;i<j;i++)
        {
            if(st[i].getroll()!=roll)
            {
                inout.write((char *)&st[i],sizeof(st[i]));
            }
        }
        cout<<"Record Deleted!!!"<<endl;
        inout.close();
        break;


        case 7:
        int filesize;
        inout.open("record.txt",ios::in);
        inout.seekg(0,ios::end);
        filesize =inout.tellg();
        cout<<"The total file size is:"<<filesize<<" Bytes"<<endl;
        cout<<"And number of objects:"<<(filesize/sizeof(stud))<<endl;
        inout.close();
        break;
        default:
        cout<<"wrong choice:";
        break;
    }
return 0;
        

}