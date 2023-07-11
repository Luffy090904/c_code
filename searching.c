#include<stdio.h>

void searching(int arr[10][10],int r,int c,int n)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
					if(arr[i][j]==n)
			{
				printf("The number liess at [%d,%d] position",i+1,j+1);
			}
		}
	}
}
int main()
{
	int i,j,num,arr[10][10];
	int r,c;
	printf("Enter the number of rows you want in matrix : ");
	scanf("%d",&r);
	printf("\nEnter the number of column you want in matrix : ");
	scanf("%d",&c);
	printf("Enter the elements in matrices\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);	
		}
	}
	printf("The matix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);	
		}
		printf("\n");
	} 
	
	
	printf("\nEnter the number which is in array and find its position....");
	scanf("%d",&num);
	searching(arr,r,c,num);

	return 0;
}
