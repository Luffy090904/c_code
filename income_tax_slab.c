#include<stdio.h>
int main()
{
	int inc,a,b;
	printf("enter your annual income : ");
	scanf("%d",&inc);
	
	if(inc<=0)
	{
		printf("\n incorrect value entered");
	}
	
	else if(inc<=250000)
	{
		printf("\n your annual income excluding all taxes : %d",inc);
	}
	
	else if(inc<=500000)
	{
		a=inc/100*5;
		b=inc-a;
		printf("\n your total income excluding taxes : %d",b);
	}
	
	else if(inc<=750000)
	{
		a=inc/100*10;
		b=inc-a;
		printf("\n your total income excluding taxes : %d",b);
	}
	
	else if(inc<=1000000)
	{
		a=inc/100*15;
		b=inc-a;
		printf("\n your total income excluding taxes : %d",b);
	}
	
	else if(inc<=1250000)
	{
		a=inc/100*20;
		b=inc-a;
		printf("\n your total income excluding taxes : %d",b);
	}
	
	else if(inc<=1500000)
	{
		a=inc/100*25;
		b=inc-a;
		printf("\n your total income excluding taxes : %d",b);
	}
	
	
	else
	{
		a=inc/100*30;
		b=inc-a;
		printf("\n your total income excluding taxes : %d",b);
	}
	
	return 0;
}
