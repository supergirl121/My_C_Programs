#include<stdio.h>
    int main()
    {
        int a, b;
        printf("enter a\n");
        scanf("%d", &a);

        printf("enter b\n");
        scanf("%d", &b);

        int sum = a + b;
        printf("sum is %d\n", sum);

        //or we can also do this
        printf("sum is %d",  a + b);
        return 0;
    }
