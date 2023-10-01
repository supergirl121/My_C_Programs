#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("Before snap a = %d and b = %d", a,b);
    a = a+b;
    b = a - b;
    a = a - b;
    printf("\n After snap a = %d and b = %d", a,b);
    return 0;
}
