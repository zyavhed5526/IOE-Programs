#include<iostream>
#include<cmath>
using namespace std;
float f(float x)
{
  return x*x-1;
}
int main()
{
    float a,b,c;
    cout<<"Enter two values of initial guess.";
    cin>>a>>b;
    float tolerance=0.000001;
    do
    {
    if (abs(f(b)-f(a))<tolerance) {cout<<"Error! The value of denominator is zero."; return 0;}
    c=(a*f(b)-b*f(a))/(f(b)-f(a));
    a=b;
    b=c;
    }while(abs(f(c))>tolerance);
    cout<<"The root lies at x="<<c;
return 0;
}

