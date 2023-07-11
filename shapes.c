#include<stdio.h>
rectangle()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
triangle()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

invert_tri()
{
	int i,j;
	for(i=5;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

equi_tri()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

diamond()
{
	int n=5;
	int size =n*2-1;
	int i,j,k;
	for(i=1;i<=size;i++)
	{
		for(k=0;k<n-(i > n ? 2*n-i : i);k++)
		{
			printf(" ");
		}
		for(j=1;j<=(i > n ? 2*n-i : i);j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}

innerReducingRec()
{
	int row , col;
	int n,k;
	printf("Enter the number you want to start with :");
	scanf("%d",&n);
	
	for(row=1;row<2*n;row++)
	{
		k=n;
		if(row<=n)
		{
			for(col=1;col<2*n;col++)
			{
				printf("%d ",k);
				if(row>col)
					k=k-1;
				if(row + col >= 2*n)
					k=k+1;	
			}
		}
		if(row>n)
		{
			for(col=1;col<2*n;col++)
			{
				printf("%d ",k);
				if(row + col < 2*n)
					k=k-1;
				if(col >= row)
					k=k+1;
			}
		}
		printf("\n");
	}
}

void main()
{
	int a;
	printf("Enter 1 to print rectangle\n");
	printf("Enter 2 to print triangle\n");
	printf("Enter 3 to print inverted triangle\n");
	printf("Enter 4 to print equilateral triangle\n");
	printf("Enter 5 to print diamond\n");
	scanf("%d",&a);
	
	if(a==1)
		rectangle();
	else if(a==2)
		triangle();
	else if(a==3)
		invert_tri();
	else if(a==4)
		equi_tri();	
	else if(a==5)
		diamond();
	else if(a==6)
		innerReducingRec();
	else
		printf("You have entered wrong number");
}
