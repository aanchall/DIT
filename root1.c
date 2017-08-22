#include<stdio.h>
#include<conio.h>
#include<math.h>
float func(float x)
{
	return(x*x*x-4*x+9);
}
void main()
{
	float x0,x1,avg,avgnew,temp;
	clrscr();
	printf("Enter the value of x0 and x1");
	scanf("%f %f",&x0,&x1);
	do{
		avg=(x0+x1)/2;
		temp=func(avg);
		printf("x0 = %f x1= %f bisected value = %f \n",x0,x1,avg);
		getch();
		if(temp<0)
			x0=avg;
		else
			x1=avg;
		avgnew=(x0+x1)/2;
	}while(avg!=avgnew);
	getch();
}

