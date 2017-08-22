#include<stdio.h>
#include<conio.h>
#include<math.h>
float func(float x)
{
return (pow(x,2)-9*x +1);
}
void main()
{
float x0,x1,x2,f0,f1,f2,root;
int i=0;
clrscr();
for(x0=1;;x0++)
{
f0=func(x0);
if(f0>0)
{
break;
}}
for(x1=x0-1;;x1--)
{
f1=func(x1);
if(f1<0)
{
break;
} }
do
{
x2=(x0+x1)/2;
f2=func(x2);
if(f2==0)
{
root=x2;
}
printf("roots of a equation is %f %f %f \n", x0,x1,root);
if(f0*f2<0)
{
x1=x2;
}
else
{
x0=x2;
}
x2=(x0+x1)/2;
i++;
}while(fabs(func(x2))>0.0001);
printf("roots of equation is %f \n", x2);
printf("number of iteration is %d\n", i);
getch();
}


