#include<stdio.h>
int main()
{
	int n1=-1,n2=1,i,num;
	printf("enter the number of element you want in fibonacci series : ");
	scanf("%d",&num);
	int n=n1+n2;
	for(i=0;i<num;++i)
	{
		printf("%d\t",n);
		n1=n2;
		n2=n;
		n=n1+n2;
	}
	return 0;
}
