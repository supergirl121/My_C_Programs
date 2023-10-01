#include<stdio.h>
#include<math.h>
int main()
{
    #define pi 3.14
    float radius, volume;
    printf("What is the radius of sphere?\n");
    scanf("%f", &radius);
    volume = ((4/3)*pi*radius*radius*radius);
    printf("The volume of sphere is %f", volume);
    return 0;
}
