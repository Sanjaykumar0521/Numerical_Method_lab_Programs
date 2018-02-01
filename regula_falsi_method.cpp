#include<iostream>
#include<math.h>
using namespace std;
double fun(double a)
{
    return (pow(a,3)+4*pow(a,2)-10);
}
double root(double a,double b)
{
    return ((a*fun(b)-b*fun(a))/(fun(b)-fun(a)));
}
int main()
{
    double x,a=-1,b=2,r,f,i;
    if((fun(a)>0&&fun(b)>0)||(fun(a)<0&&fun(b)<0))
    {
        cout<<"Regula falsi method cannot be applied ";
    }
    else
    {
      for(i=0;i<30;i++)
      {
        r=root(a,b);
        f=fun(r);
        if(f>=0)
        {
            b=r;
        }
        else
        {
            a=r;
        }
      }
     cout<<"value of a and b after 30 iterations "<<a<<" "<<b;
    }

    return 0;
}
