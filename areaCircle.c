#include<stdio.h>
int main()
{
    #define pi 3.14
    float radius;
    printf("enter radius of circle\n");
    scanf("%f", &radius);

    printf("area is %f", pi*radius*radius);
    return  0;

}
