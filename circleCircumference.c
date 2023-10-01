#include<stdio.h>
int main()
{
    #define pi 3.14
    float radius;
    printf("What is the radius of circle?\n");
    scanf("%f", &radius);
    printf("%f is the circumference of cirlce", 2*pi*radius);
    return 0;
}
