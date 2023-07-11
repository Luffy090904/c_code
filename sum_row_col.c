#include<stdio.h>
int  sum(int arr[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		int rsum=0;
		for(j=0;j<c;j++)
		{
			rsum+=arr[i][j];
		}
		printf("the of row %d is : %d\n",i+1,rsum);
	}
	
	for(j=0;j<c;j++)
	{
		int csum=0;
		for(i=0;i<r;i++)
		{
			csum+=arr[i][j];
		}
		printf("the of column %d is : %d\n",j+1,csum);
	}
}
int main()
{
	int arr[10][10],i,j,r,c;
	printf("\nenter the number of rows : ");
	scanf("%d",&r);
	printf("\nenter the number of column : ");
	scanf("%d",&c);
	
	printf("enter the elements of matrice\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n\n");
	
    printf("the matrice array is :\n ");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	sum(arr,r,c);

    return 0;
}
