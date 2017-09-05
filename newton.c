#include<stdio.h>
#include<conio.h>
#include<math.h>
float F(float x)
{
	return(3*x-cos(x)-1);
}
float Df(float x)
{
	return(3+sin(x));
}
void main()
{
	float x,x0,x1,x2,x3,f1,f2;
	int i=0;
	clrscr();
	printf("Enter the value of x0 and x1 : ");
	scanf("%f %f",&x0,&x1);
	x2=(x0+x1)/2.0;

	do{
	x=x2;
	f1=F(x2);
	f2=Df(x2);
	x3=x2-(f1/f2);
	x2=x3;
	printf("x2=%f\n   x3=%f\n",x2,x3);
	i++;
	}
	while(fabs(x2-x)>0.0001);
	printf("Root is : %f",x3);
	printf("\nTotal Iterations are : %d",i);
	getch();
}



