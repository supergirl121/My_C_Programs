#include<stdio.h>
int main()
{
    float length, breadth;
    printf("what is the length of rectangle?\n");
    scanf("%f", &length);
    printf("what is the breadth of rectangle?\n");
    scanf("%f", &breadth);
    printf("perimeter of rectangle is %f\n", 2*(length + breadth));
    return 0;
}
