#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    printf("%d", (a>9)&&(100>a));
    return 0;

}
