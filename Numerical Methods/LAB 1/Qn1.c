#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
int main()
{
    float a,b,c;
    int count=0,n;
    printf("Enter values of a and b\n");
    scanf("%f%f",&a,&b);
    n = (int)(log(fabs(b-a))-log(0.0005))/(log(2));
    if(f(a)*f(b)>0)
    {
        printf("There is no real root between the interval %f and %f",a,b);
    }
     else if(f(a)*f(b)==0)
    {
        if(f(a)==0)
        printf("There count++;is real root at the point x=%f",a);
        if(f(b)==0)
        printf("There is real root at the point x=%f",b);
    }
    else
    {
        do{
        c=(a+b)/2;
        count++;
        if(f(c)*f(a)>0)
        a=c;
        else
        b=c;
        }while (count<2*n || f(c)>0.000005);

        printf("There is real root at the point x=%f",c);
    }
return 0;
}
float f(float x)
{
    return log(x);
}
