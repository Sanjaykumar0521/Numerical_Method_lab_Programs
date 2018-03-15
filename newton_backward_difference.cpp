#include <bits/stdc++.h>
using namespace std;
float val_p(float p, int n)
{
    float temp = p;
    for (int i = 1; i < n; i++)
        temp = temp * (p + i);
    return temp;
}
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}


int main()
{
    int i=0,f[10],x[10],n,j=0,k=0,m,t[10],a[10][10];
    float p,y,value;
    cout<<"enter total no. of values ";
    cin>>n;
    cout<<"enter values of x ";
    for(i=0;i<n;i++)
    {
        cin>>t[i];
    }
    cout<<"enter the values of f(x) ";
    for(i=0;i<n;i++)
    {
        cin>>f[i];
    }
    x[0]=f[n-1];k=k+1;
    cout<<"enter the value of x at which the value is to find out ";
    cin>>value;
    for(m=0;m<n;m++)
    {
     for(i=0;i<n-m-1;i++)
     {
        f[i]=f[i+1]-f[i];
        a[i][m]=f[i];
        if(i==n-m-2)
        {
            x[k]=f[i];
            k++;
        }
     }
    }
    cout<<"Table of values \n";
  for(m=0;m<n;m++)
    {
    for(i=0;i<n-m-1;i++)
        {
         cout << setw(4) << a[m][i] << "\t";
        }
        cout << endl;
    }
  float sum = x[0];
    float u = (value - t[n - 1]) / (t[1] - t[0]);
    for (int i = 1; i < n; i++) {
        sum = sum + (val_p(u, i) * x[i]) /fact(i);
    }
   cout << " the value at " << value << " is "
         << sum << endl;

    return 0;
}

