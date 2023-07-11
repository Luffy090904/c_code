#include <stdio.h>
int main()
{
    int a = 564646 , rev = 0;
    printf("before reverse = %d\n", a);
    while (a != 0)
    {
        rev = rev * 10 + a % 10;
        a = a / 10;
    }
    printf("after reverse = %d", rev);
    
    return 0;
}
