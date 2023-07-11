#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
    ;
}
void main()
{
    printf("the sum of 1 & 2 is : %d\n", sum(1, 2)); // testing function

    int (*ptr)(int, int);
        ptr = &sum;
    //int a = (*ptr)(3, 8);
    printf("the sum is : %d ", (*ptr)(3, 9));
}