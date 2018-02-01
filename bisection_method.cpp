#include<iostream>
#include<math.h>
using namespace std;
double ans;
double bisection(double y,double z)
{
	double x=(y+z)/2;
	ans=pow(x,3)-4*x-9;
	int x1=int(x*1000);
	int y1=int(y*1000);
	int z1=int(z*1000);
	if(x1==y1 || x1==z1)
	{
		cout<<x;
	}
	else
	{
		if(ans<0)
		{
			bisection(x,z);
		}
		else
		{
			bisection(y,x);
		}
	}
}
int main()
{
	double x,y,z,ans1,ans2;
	y=2;z=3;
	ans1=pow(y,3)-4*y-9;
	ans2=pow(z,3)-4*z-9;
	bisection(y,z);
}
