#include<iostream>
#include<cmath>
using namespace std;
float f(float x)
{
  return x*x+1;
}
float fdash(float x)
{
    return 2*x;
}
int main()
{
    int count=0;
    float x;
    cout<<"Enter the value of initial guess.";
    cin>>x;
    if (abs(fdash(x))<0.000001) {cout<<"Error! The value of denominator is zero."; return 0;}
    while(abs(f(x))>0.000001)
    {
    x=x-(f(x)/fdash(x));
    count++;
    if (count>1000) {cout<<"oscillatory case."; return 0;}
    if (abs(fdash(x))<0.000001) {cout<<"Error! The value of denominator is zero."; return 0;}
    if(count>1000){cout<<"No root found.";return 0;}
    }
    cout<<"The root lies at x="<<x;
return 0;
}
