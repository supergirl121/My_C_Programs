#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("%d", a%2==0);
    return 0;
}
