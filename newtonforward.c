#include<stdio.h>
#include<conio.h>
void main()
{
	 float x[10],y[20][20],x1,y0,y1,y2,y3,y4,y5,p;
	 int i,j,n;
	 clrscr();
	 printf("Enter the values : ");
	 scanf("%d",&n);
	 printf("\n Enter the values of x and y : ");
	 for(i=0;i<n;i++)
	 {
		scanf("%f %f",&x[i],&y[i][0]);
	 }
	 for(j=1;j<n;j++)
	 {
		for(i=0;i<n-j;i++)
		{
			y[i][j]=y[i+1][j-1]-y[i][j-1];
		}
	 }
	 printf("\n The forward difference table is as : ");
	 for(i=0;i<n;i++)
	 {
		printf("\t %f",x[i]);
		for(j=0;j<n-i;j++)
		{
			printf("\t %f",y[i][j]);
		}
		printf("\n");
	 }
	 printf("\n Enter the value of x : ");
	 scanf("%f",&x1);
	 i=0;
	 do{
	 i++;
	 }while(x[i]<x1);
	 i--;
	 p=(x1-x[i])/(x[1]-x[0]);
	 printf("%f",p);

	 y1=p*y[i][1];
	 y2=p*(p-1)*y[i][2]/2;
	 y3=p*(p-1)*(p-2)*y[i][3]/6;
	 y4=p*(p-1)*(p-2)*(p-3)*y[i][4]/24;
	 y0=y[i][0]+y1+y2+y3+y4;
	 printf("\n The value of x is : %f\n, The value of y is : %f\n",x1,y0);
	 getch();
}
