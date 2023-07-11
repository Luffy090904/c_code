#include<stdio.h>

void transpose(int arr[10][10],int r,int c)
{
	int transpose[10][10],i,j;
	 printf("transpose of matrice is : \n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transpose[j][i]=arr[i][j];
		}
	}
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
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
	
	transpose(arr,r,c);

    return 0;
}
