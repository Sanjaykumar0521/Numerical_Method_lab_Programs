#include<iostream>
#include<math.h>
using namespace std;
void fun(double x)
{
   double a=exp(-x)-x;
   double b=-exp(-x)-1;
   double c=x-(a/b);
   int a1=c*pow(10,6);
   int a2=x*pow(10,6);
   if(a1==a2)
   {
   cout<<"the answer is "<<c;
   }
   else
   {
    fun(c);
   }
}

int main()
{
    cout<<"Sanjay Kumar\n161210037\n";
    double x=0;
    fun(0);
    return 0;
}
