#include<stdio.h>

rev_num(int a)
{
    int rev = 0;
	while (a != 0)
	{
		rev = rev * 10 + a % 10;
		a = a / 10;
	}
	
	
	
	//further program is to convert number in form of hash and star 
	int flag;
	int i=0;
	int b=0;
	char result[20];

	while(rev > 0)
	{
		flag = 0;
		b = rev % 10;
		if(b == 0 || b == 1)
		{
			flag = 1;
		}
		else if(b == 2 || b == 3)
		{
			flag = 0;
		}
		else
		{
			for(i=2;i<=b-1;i++)
        	{
      		 	if(b % i == 0)
            	{
            		flag = 1;
            		break;
            	}
            	else
            	{
            		flag = 0;
				}
    		}
		}
		

       
			
		if(flag == 0)
		{
			printf(" PRIME ");
		}
		else
		{
			printf("%d",b);
		}
		rev = rev / 10;
				
	}
	

}
void main()
{
    int a;
	printf("Enter the number to check prime : ");
	scanf("%d", &a);
	rev_num(a);
}
