#include<stdio.h>
void main()
{
	printf("FILE NAME : %s\n",__FILE__);
	printf("TODAY'S DATE : %s\n",__DATE__);
	printf("PRESENT TIME : %s\n",__TIME__);
	printf("CURRENT LINE NUMBER : %d\n",__LINE__);//used to know the current line number
	printf("ANSI : %d",__STDC__);//used to know that our program is workinng on ANSI value
}
