//code for data management company(employee directory)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
	char name[30];
	int eid;
	char CompanyName[30];
};
int main()
{
	int n,i;
	printf("Enter the number of employes : ");
	scanf("%d",&n);	
	struct employee * E=(struct employee *)malloc(n*sizeof(struct employee));
	
	for(i=0;i<n;i++)
	{ 
		printf("\nEmployee %d : Enter your employee id : ",i+1);
		scanf("%d",&E[i].eid);
		getchar();
		printf("\nEnter your name : ");
		gets(E[i].name);
		printf("\nEnter your Company Name : ");
		gets(E[i].CompanyName);
	    
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nEmployee %d id is : %d",i+1,E[i].eid);
		printf("\nEmployee name is : %s",E[i].name);
	    printf("\nCompany Name is : %s",E[i].CompanyName);
	    printf("\n\n");
	}
	free(E);
	return 0;
}
