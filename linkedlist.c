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
    temp ->info=data;
    temp->link=start;
    start= temp;
  }
void insertanywhere(int data,int pos)
{
   int i;
   struct node*temp1,*temp2;
   temp1=(struct node*)malloc(sizeof(struct node));
   temp1->info=data;
   temp2=start;
   for(i=0;i<pos-1;i++)
   {
     temp2=temp2->link;

   }
   temp1->link=temp2->link;
   temp2->link=temp1;
}
void main()
{
  int value,i,n,place,value1;
  struct node*key;
  start=NULL;
  clrscr();
  printf("\n how many values you want to insert :- ");
  scanf("%d",&n);
  printf("\n enter the data you want to insert in the link list at the beg. :-");
  for(i=1;i<=n;i++)
  {
    scanf("%d",& value);
    insertbeg(value);
  }
  key=start;
  printf("\n the information in the linklist is : ");
  while(key!=NULL)
  {
     printf("\n\t %d",key->info);
     key=key->link;
   }
   printf("\nenter the postion after which you want to insert ;- ");
   scanf("%d",&place);
   printf("\n enter the data you want to insert");
   scanf("%d",&value1);
   insertanywhere(value1,place);
   printf("\n the information after change :- ");
   key=start;
   while(key!=NULL)
  {
     printf("\n\t %d",key->info);
     key=key->link;
   }
   getch();
}
