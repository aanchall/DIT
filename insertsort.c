#include<stdio.h>
#include<conio.h>

void insertsort(int arr[5], int n)
{
	int i,j,key;
	for(i=0;i<n;i++)
	{
		key=arr[i];
		j=i-1;

		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void printarray(int arr[], int a)
{
	int i;
	for(i=0;i<a;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
}

void main()
{
	int arr[]= {8,6,4,3,1};
	int a=5;
	insertsort(arr,a);
	printarray(arr,a);
	getch();
}



