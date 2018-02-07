#include<iostream>
using namespace std;
void bisection(float a,float b)
{
    float t=(a+b)/2;
    int x1=a*1000;
    int x2=b*1000;
    float l=t*t*t-4*t-9;
    if(x1==x2)
    {
        cout<<"the answer is "<<t;
    }
    else if(l<0)
    {
        bisection(t,b);
    }
    else
    {
        bisection(a,t);
    }
}
int main()
{
    float a=2,b=3;
    bisection(a,b);

}
