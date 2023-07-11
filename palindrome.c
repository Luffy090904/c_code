#include <stdio.h>
int reverse(int num)
{
    int rev = 0;
    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("\nReverse off a number is : %d",rev);

    return rev;
}
void main()
{
    int number;
    printf("Enter number you want to check whether its is a palindrome or not : ");
    scanf("%d", &number);
    
    if(reverse(number)==number)
    {
        printf("\nthe number is palindrome");
    }
    else
    {
        printf("\nthe number is not palindrome");
    }
}