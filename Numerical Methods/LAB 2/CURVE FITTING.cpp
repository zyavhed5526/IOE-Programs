#include<iostream>
#include<cmath>
using namespace std;
float sumx(float x[],int n)
{float sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=x[i];
    }
    return sum;
}
float sumx_sqr(float x[],int n)
{float sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=x[i]*x[i];
    }
    return sum;
}
float sumy(float y[],int n)
{float sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=y[i];
    }
    return sum;
}
float sumxy(float x[],float y[],int n)
{float sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=x[i]*y[i];
    }
    return sum;
}
int main()
{
int n,choice;
cout<<"Enter value of n."<<endl;
cin>>n;
float x[n],y[n];
for(int i=0;i<n;i++)
{
    cout<<"Enter value of x["<<i<<"]."<<endl;
    cin>>x[i];
    cout<<"Enter value of y["<<i<<"]."<<endl;
    cin>>y[i];
}
cout<<"What type of curve fitting do you want? \n Press 1 for a stright line. \n Press 2 for an exponential curve.";
cin>>choice;
if (choice==2)
{
   for(int i=0;i<n;i++)
{
    y[i]=log(y[i]);
} 
}
float Ex=sumx(x,n),Ey=sumy(x,n),Exsqr=sumx_sqr(x,n),Exy=sumxy(x,y,n);
float a=((Exsqr*Ey)-(Ex*Exy))/((n*Exsqr)-(Ex*Ex));
float b=((n*Exy)-(Ex*Ey))/((n*Exsqr)-(Ex*Ex));
switch(choice){
case 1: {cout<<"The values of a and b are "<<a<<" and "<<b<<" respectively."; break;}
case 2: {cout<<"The values of a and b are "<<exp(a)<<" and "<<b<<" respectively."; break;}
default:{cout<<"Invalid choice";break;}
}
return 0;
} 
