#include<iostream>
#include<math.h>
using namespace std;
int c=1;
void bisec(float a,float b)
{float l=0;
   l=(a+b)/2;
   float k=l*sin(l)-1;
    if(c==7)
    {
        cout<<l;
    }
    else if(k<0)
    {
        c++;
        bisec(l,b);

    }
    else if(k>0)
    {
        c++;
        bisec(a,l);
    }
}
int main()
{
    float a=1,b=1.5;
    bisec(a,b);
    return 0;

}
