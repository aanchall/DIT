#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i;
	int *a=(int *)malloc(5*sizeof(int));
	// int *a=(int *)calloc(5,sizeof(int));
	clrscr();
	for(i=0;i<5;i++)
	{
		scanf("%d",a++);
	}
	a--;
	for(i=0;i<5;i++)
	{
		printf("%d ",*a++);
	}
	getch();
}









