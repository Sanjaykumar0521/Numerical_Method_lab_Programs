#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
double equ(double x)
{
    return(exp(-x)-x);
}
double c=0,x2=0,error=0;
double sccant_method(double x0, double x1)
{   c++;
 x2=x1-equ(x1)*((x1-x0)/(equ(x1)-equ(x0)));
    error=fabs(((x2-x1)/x2)*100);
   if(error<0.1)
   {
       exit(0);
   }
   else
   {
    cout<<" root after "<<c<<" iteration is: "<<x2<<" with "<<error<<"% error\n";
    sccant_method(x1,x2);
    }
}

int main()
{
    cout<<"Sanjay Kumar\n161210037\n";
    double x0=0,x1=1.0;
    sccant_method(x0,x1);
    return 0;
}

