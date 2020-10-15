//CPP to find the product of two 3 by 3 matrices entered by the user by overloading binary * operator.
#include<iostream>

using namespace std;

class matrixMultiply{
int matrix[3][3];

public:

void getdata(){
cout<<"Enter the matrix element:"<<endl;
for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
        cin>>matrix[i][j];
}


void showdata(){
cout<<"The result is:"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
}

friend matrixMultiply operator *(matrixMultiply,matrixMultiply);
};

matrixMultiply operator *(matrixMultiply p,matrixMultiply q){
int sum;
matrixMultiply temp;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        sum=0;
            for(int k=0;k<3;k++){
                sum+=p.matrix[i][k]*q.matrix[k][j];
                temp.matrix[i][j]=sum;
            }
    }
}
return temp;
}

int main(){
matrixMultiply a,b,c;
a.getdata();
b.getdata();
c=a*b;
c.showdata();
return 0;

}
