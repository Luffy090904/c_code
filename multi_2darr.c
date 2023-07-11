#include<stdio.h>
int main()
{
		int arr1[3][3],arr2[3][3],i,j,k,mult[3][3];
	
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
    
    printf("the multiplication of matrices is :\n");
2\1    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		mult[i][j]=0;
    		for(k=0;k<3;k++)
    		{
    			mult[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",mult[i][j]);
		}
		printf("\n");
	}
	
    return 0;

}
