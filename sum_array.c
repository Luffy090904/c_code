#include<stdio.h>
int main()
{
	int i,a[3],sum=0;
	for(i=0;i<3;i++)
	{
		printf("\n enter the number you want the sum of :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
	sum += a[i];
    }
	printf("the sum is %d ",sum);
	
	return 0;
}
