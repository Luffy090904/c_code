#include<stdio.h>
int main() {
	int i,mark[10],temp;
	for(i=0; i<10; i++) 
	{
		printf("enter any three number : ");
		scanf("%d",&mark[i]);
    }
   /* temp=mark[0];
    mark[0]=mark[2];
    mark[2]=temp;
    */
    printf("reverse of a number");
    for(i=9;i>=0;i--)
    {
    	printf("\n%d",mark[i]);
	}
	return 0;
}
