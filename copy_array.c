#include<stdio.h>
int main()
{
	int a[3], b[3], i;
	printf("input the number in array\n");
	for (i = 0; i < 3; i++)
	{
		scanf("\n%d", &a[i]);
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("\nelement entered in first array %d ", a[i]);
	}
	for (i = 0; i < 3; i++)
	{
		b[i] = a[i];
	}
	for (i = 0; i < 3; i++)
	{
		printf("\nthe elements in second array is %d", b[i]);
	}


	return 0;
}
