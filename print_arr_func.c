#include<stdio.h>

void print(int arr[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][3],i,j;
	
	printf("enter the elements of matrice\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	print(arr);

    return 0;
}
