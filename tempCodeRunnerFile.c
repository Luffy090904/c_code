#include<stdio.h>
void main()
{
   int a,total;
   printf("eenter units consumed : ");
   scanf("%d", &a);

  if(a<0)
  {
      printf("invallid number");

  }


  else if(a<=200.0)
   {
       total=a*3.0;
       printf("total bill = %d",total);
   }
else if(a<=400.0)
   {
       total=a*4.5;
       printf("total bill = %d",total);
   }
else if(a<=800.0)
   {
       total=a*6.5;
       printf("total bill = %d",total);
   }
else if(a<=1200.0)
   {
       total=a*7.0;
       printf("total bill = %d",total);
   }

else 
{
    total=a*8.0;
    printf("total bill =%d",total);
}







}