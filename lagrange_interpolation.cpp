#include<iostream>
#include<math.h>
using namespace std;
void lagrange(float x[],float y[],int v,int n)
{
     int i,j;
    double res=0,t=1;
    for(i=0;i<n;i++)
    {
        t=y[i];
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                t=t*(v-x[j])/(float(x[i]-x[j]));
            }
        }
        res=res+t;
    }
    cout<<"the answer is "<<res;
}

int main()
{
    cout<<"Sanjay Kumar\n161210037\n";
    int v,n,i;
    float x[10],y[10];
    cout<<"enter total no. of values ";
    cin>>n;
    cout<<"enter the values of x\n";
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
     cout<<"enter the values of y\n";
    for(i=0;i<n;i++)
    {
        cin>>y[i];
    }
   cout<<"enter the value of x at which y has to calculate ";
   cin>>v;
   lagrange(x,y,v,n);
}

