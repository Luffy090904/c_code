#include<stdio.h>

void rev_name(char name[] , int a)
{
	int i;
	for(i=a-1;i>=0;i--)
    {
    	printf("%c",name[i]);
	}
	printf("\n");
}

void palindrome(char name[] , int a)
{
	int i,flag=0;
	for(i=0;i<=a-1;i++)
    {
    	if(name[i] != name[a-i-1])
    	{
    		flag=1;
    		break;
		}
	}
	if(flag==0)
	{
		printf("\nname is palindrome");
	}
	else
	{
		printf("\nname is not palindrome");
	}	
}

void search(char name[] , int a)
{
	char b;
	int i,count=0;
	printf("\nEnter the character you want to search : ");
	scanf("%c",&b);
	for(i=0;i<=a-1;i++)
    {
    	if(name[i]==b)
		{
			count++;
		} 
	}
	printf("%d",count);
}

void replace(char name[] , int a)
{
	char b,c;
	int i;
	printf("\nEnter the character you want to replace : ");
	scanf("%c",&b);
	getchar();
	printf("\nEnter the character you want to put in place of %c : ",b);
	scanf("%c",&c);
	getchar();
	for(i=0;i<=a-1;i++)
    {
    	if(name[i]==b)
		{
			name[i]=c;
		} 
	}
	for(i=0;i<=a-1;i++)
	{
		printf("%c",name[i]);
	}
}
void main() 
{
	int a,i;
    char name[] = {"aaaaaa"};
    printf("%d\n",sizeof(name));
    a=sizeof(name);
    
    rev_name(name,a);
    palindrome(name,a);
	search(name,a);
	replace(name,a);
}
