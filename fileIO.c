#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char str[36];// = " kumar";
    //for reading(r)
   /* ptr = fopen("test.txt","r");
    fscanf(ptr,"%s",str);
    printf("this is all i have %s",str);
    fclose(ptr); 
    */
   
   //for writing(w)  and appending(a)
    //ptr = fopen("test.txt","w");//w - sirf likhe hue ko replace krne k liye  use hota h
   /* ptr = fopen("test.txt","a");//a -jintni br run krk type kroge utni br age print krega without deleting/replacing previous data
    scanf("%s",&str);
    fprintf(ptr,"%s",str);
    printf("%s",str);
    fclose(ptr);*/
    
    //funtion r+,w+,a+
   /* ptr = fopen("test.txt","w+");//the same way i can use r+,a+
    printf("enter thhe name");
    gets(str);
    fscanf(ptr,"%s",str);
    fprintf(ptr,"%s",str);
    printf("this is all i have got %s",str);
    fclose(ptr);*/


    return 0;
}
