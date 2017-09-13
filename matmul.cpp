#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[3][3],arr2[3][3],re[3][3],i,j,k=0,l=0;
	clrscr();
	//insert elements
	printf("Enter elements of Matrix 1 \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		       scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter elements of Matrix 2 \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		       scanf("%d",&arr2[i][j]);
		}
	}
	//multiply operation
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			re[i][j]=0;
			for(k=0;k<3;k++){
				re[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}

	//printing result
	printf("Resultant Matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		       printf("%d ",re[i][j]);
		}printf("\n");
	}

	getch();
}
