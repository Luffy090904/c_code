#include<stdio.h>
int main()
{
	int inc,a;
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
		a=inc-250000/100*5;
		printf("\n your total income excluding taxes : %d",a);
	}
	
	else if(inc<=750000)
	{
		a=inc-500000/100*10+12500;
		printf("\n your total income excluding taxes : %d",a);
	}
	
	else if(inc<=1000000)
	{
		a=inc-750000/100*15+12500+25000;
		printf("\n your total income excluding taxes : %d",a);
	}
	
	else if(inc<=1250000)
	{
		a=inc-1000000/100*20+12500+25000+37500;	
		printf("\n your total income excluding taxes : %d",a);
	}
	
	else if(inc<=1500000)
	{
		a=inc-1250000/100*25+12500+25000+37500+50000;
		printf("\n your total income excluding taxes : %d",a);
	}
	
	else
	{
		a=inc-1500000/100*30+12500+25000+37500+50000+122400;
		printf("\n your total income excluding taxes : %d",a);
	}
	
	return 0;
}
