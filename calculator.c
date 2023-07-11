#include<stdio.h>

//global declaration
int x,y,c;

//function for addition (without arguments and without return value)
int sum()
{
	printf("enter the two number you want to add\n");
	scanf("%d\t%d",&x,&y);
	printf("the sum is : %d",x+y);
}

//function for subtraction (without argumment but with return value)
int sub()
{
	printf("enter the two number you want to subtract : \n");
	scanf("%d\t%d",&x,&y);
	return x-y;
}

//function for multiplication (with argument and with return value)
int mult(int a,int b)
{
	return a * b;
}

//function for division (with argument but without return value)
int div(int a,int b)
{
	printf("the division is : %d",a/b);
}

//funnction for factorial (recursion)
int factorial(int a)
{
	if(a==1 || a==0)
	return 1;
	else
	return (a*factorial(a-1));
}

int main()
{
	char op;
	printf("Enter the operation you want to perform : \n");
	printf("|    1.press a for addition            |\n");
	printf("|    2.press s for subtraction         |\n");
	printf("|    3.press m for multiplication      |\n");
	printf("|    4.press d for division            |\n");
	printf("|    5.press f for factorial           |\n");
	printf("|    6.press g for fibonacci series    |\n");
	
	scanf("%c",&op);
	
	switch(op)
	{
		case 'a':
		{
			sum();
			break;
		}
		case 's':
		{
			c=sub();
			printf("the subtraction is : %d",c);
			break;
		}
		case 'm':
		{
			printf("enter number you want to multiply : ");
			scanf("%d\t%d",&x,&y);
			c=mult(x,y);
			printf("the multiplication is : %d",c);
			break;
		}
		case 'd':
		{
			printf("enter the you want to divide : ");
			scanf("%d",&x);
			printf("enter the you want to divide by : ");
			scanf("%d",&y);
			div(x,y);
			break;
		}
		case 'f':
		{
			printf("enter the  number you want the factorial of : ");
			scanf("%d",&x);
			c=factorial(x);
			printf("the factorial of %d is : %d",x,c);
			break;
		}
		case 'g':
	//code for fibonacci series		
		{
			int n1=-1,n2=1,i,num;
	        printf("enter the number of element you want in fibonacci series : ");
	        scanf("%d",&num);
	        int n=n1+n2;
			for(i=0;i<num;++i)
	        {
		        printf("%d\n",n);
		        n1=n2;
		        n2=n;
		        n=n1+n2;
	        }
	        break;
		}
		default:
		printf("error");
		
	}
	return 0;
}
