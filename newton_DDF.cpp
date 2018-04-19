#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"Sanjay Kumar\n161210037\n";
    double x[10], y[10], t[10];
    double k,f,n,f1=1,f2=0;
    int i,j=1;
    cout<<"\nEnter total no. of values\n";
    cin>>n;

    cout<<"\nEnter the values of x:\n";
    for (i=1;i<=n;i++)
        cin>>x[i];

    cout<<"\nEnter the corresponding values of y are:\n";
    for (i=1;i<=n;i++)
        cin>>y[i];

    f=y[1];
    cout<<"\nEnter the value of p at which y  has to calculate\n";
    cin>>k;

    do
    {
        for (i=1;i<=n-1;i++)
        {
            t[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=t[i];
        }
        f1=1;
        for(i=1;i<=j;i++)
            {
                f1*=(k-x[i]);
            }
        f2+=(y[1]*f1);
        n--;
        j++;
    }

    while(n!=1);
    f+=f2;
    cout<<"\nvalue of y at "<<k<<" is  "<<setprecision(9)<<f<<endl;

    return 0;
}
