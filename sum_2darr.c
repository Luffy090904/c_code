#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],i,j,sum[3][3];
	
	printf("enter the elements of first matrice \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("\n\n");
	
    printf("the first matrice array is :\n ");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
    
    printf("\n\n");
    
    printf("enter the elements of second matrice \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("\n\n");
	
    printf("the second matrice array is :\n ");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
    
    printf("\n\n");
    
    printf("the sum of the matrice is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=arr1[i][k]+arr2[k][j];
		}
	}
	
	printf("\n\n");
	
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
    
    printf("\n\n");

    return 0;
}
