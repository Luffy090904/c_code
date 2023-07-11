#include<stdio.h>
int main()
{
	int arr[3][3],i,j,transpose[3][3];
	
	printf("enter the elements of matrice");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n\n");
	
    printf("the matrice array is :\n ");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
    
    printf("\n\n");
    
    printf("transpose of matrice is : \n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			transpose[j][i]=arr[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}

    return 0;
}
