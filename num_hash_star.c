#include <stdio.h>
#include <string.h>

rev_num(int a)
{
	int rev = 0;
	while (a != 0)
	{
		rev = rev * 10 + a % 10;
		a = a / 10;
	}
	printf("%d\n", rev);
	
	//further program is to convert number in form of hash and star 
	int i=0,n=0;
	int b,j;
	char result[10];

	while(rev > 0)
	{
		b = rev % 10;

		if (b % 2 == 0)
			{
				result[i] = '#';
			}
	
		else
			{
				result[i] = '*';
			}
		rev = rev / 10;
		i++;
		n++;
	}
		

	for (j = 0; j < n; j++)
	{
		printf("%c ", result[j]);
	}

}


void main()
{
	int a;
	printf("Enter the number you want in hash and star form : ");
	scanf("%d", &a);
	rev_num(a);
}
