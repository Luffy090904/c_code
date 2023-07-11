#include<stdio.h>
int main() 
{
	int a[3],i,j,temp,p,q,temp1;
	printf("enter the elements in array : ");
	for(i=0; i<3; i++) 
		scanf("%d\n",&a[i]);
	

	for(i=0; i<3; i++)
	{
		for(j=i+1; j<3; j++) 
		{
			if(a[i]>a[j]) 
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	printf("array in ascending order is : ");
	for(i=0; i<3; i++)
		printf("%d\n",a[i]);
for(p=0;p<3;p++) // loop for sorting array in descending order
    {
        for(q=p+1;q<3;q++)
        {
            if(a[p]<a[q])
            {
                temp1=a[p];
                a[p]=a[q];
                a[q]=temp1;
            }
        }
    }
    printf("\n Descending order of an array : \n");  // print descending order
    for(p=0;p<3;p++)
    {
        printf("%d ",a[p]) ;
    }

	return 0;
}
