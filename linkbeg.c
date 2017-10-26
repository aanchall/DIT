#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*link;
}*start;
void insertbeg(int data)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp -> info=data;
	temp -> link=start;
	start=temp;
}
void main()
{
	int value,i,n;
	struct node*q;
	clrscr();
	start=NULL;
	printf("\n How many values you want to insert : ");
	scanf("%d",&n);
	printf("\n Enter the data you want to insert at the beg : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&value);
		insertbeg(value);
	}
	q=start;
	printf("\n The information stored in the linked list is : ");
	while(q!=NULL)
	{
		printf("\n \t %d",q->info);
		q=q->link;
	}
	getch();
}
