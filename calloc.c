#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i=0,j=0;
	char choice;
	int *a=(int *)calloc(1,sizeof(int));
	do{
		clrscr();
		printf("Enter number : ");
		scanf("%d",a+i);
		scanf("%c");
		i++;
		printf("Enter more : yes or no ? ");
		scanf("%c",&choice);
		a=(int *)realloc(a,sizeof(int));
	}
	while(choice=='y');
	printf("\n Total records stored : %d\n",i);
	for(j=0;j<i;j++)
	{
		printf("%d \t",*a++);
	}
	getch();
}




