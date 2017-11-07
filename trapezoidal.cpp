#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float);
int main()
{
	float a,b,h,sum=0,x,trap;
	int n,i,m;
	clrscr();
	cout<<"Enter the limits of a and b and no. of subinterval n : \n";
	cin>>a>>b>>n;
	h=(b-a)/n;
	m=n-1;
	for(i=1;i<=m;i++)
	{
		x=a+i*h;
		sum=sum+f(x);
	}
	trap=h*(f(a)+2.0*sum+f(b))/2.0;
	cout<<"Value of integral : "<<n<<endl;
	cout<<"Subinterval : "<<trap;
	getch();
}
float f(float x)
{
	float func;
	func=(x*x*x);
	return(func);
}


