#include <stdio.h>
int main()
{
    int a, b, c, d, a1, a2, a3, temp, rev, arm;
    printf("enter the number: ");
    scanf("%d", &a);

    temp = a;

    a1 = a % 10;
    b = a / 10;

    a2 = b % 10;
    c = b / 10;

    a3 = c % 10;
    d = c / 10;

    rev = a1 * 100 + a2 * 10 + a3 * 1;
    printf("\nthe reverse of a number is:%d", rev);

    //program for armstrong number

    arm = a3 * a3 * a3 + a2 * a2 * a2 + a1 * a1 * a1;
    printf("\nthe number you got:%d", arm);
    if (temp == arm)
    {
        printf("\n number entered is armstrong number");
    }
    else
    {
        printf("\n number entered is not armstrong number");
    }
    
    
    
    //program for palandrom

    if (a==rev)
    {
        printf("\nthe number is palandrom");
    }
    else
    {
        printf("\nthe number entered is not palandrom ");
    }
    

    return 0;
}
