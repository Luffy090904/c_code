#include<stdio.h>
void diagonal(int arr[10][10],int r,int c)
{
	int i,j;
	printf("\nthe diagonal is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf("%d\t",arr[i][j]);
			}
		}
	}
    int sum=0;
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum+=arr[i][j];
			}
		}
	}
	printf("\nthe sum of diagonal is : %d",sum);

}
int main()
{
	int arr[10][10],i,j,r,c;
	printf("\nenter the number of rows : ");
	scanf("%d",&r);
	printf("\nenter the number of column : ");
	scanf("%d",&c);
	if(r==c)
	{
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
	
	diagonal(arr,r,c);
    }
    else
    printf("it is not square matrix");

    return 0;
}
