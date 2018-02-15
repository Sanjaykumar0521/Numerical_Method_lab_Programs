#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
double equ(double a)
{
    return(a*a*a-20);
}
double c=0,x2=0;
double sccant_method(double x0, double x1)
{   c++;
   if(c==4)
    {exit(0);}
   else
    {
    x2=x1-equ(x1)*((x1-x0)/(equ(x1)-equ(x0)));
    cout<<" root after "<<c<<" iteration is: "<<x2<<" with "<<abs(((x2-x1)/x2)*100)<<"% error\n";
    sccant_method(x1,x2);
    }
}

int main()
{
    cout<<"Sanjay Kumar\n161210037\n";
    double x0=4.0,x1=5.5;
    sccant_method(x0,x1);
    return 0;
}
