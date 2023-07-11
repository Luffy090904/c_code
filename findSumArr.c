#include<stdio.h>
int main()
{
    int a,i,b,j,n,k;
    printf("Enter  the length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the numbers in array : ");
    for(k=0;k<=n-1;k++)
    {
        scanf("%d",&arr[k]);
    }
    printf("\nEnter the target : ");
    scanf("%d",&a);
    for(i=0;i<=n-1;i++)
    {
       for(j=0;j<=n-1;j++)
       {
            b=0;
            b=arr[i]+arr[j];
            if(b==a)
            {
                if (i!=j)
                {
                     printf("\nThe indices are [%d,%d]",i,j);
                }
                else
                {
                    printf("You have entered wrong target!");
                }
            }
       }    
    }
    
    return 0;
}
