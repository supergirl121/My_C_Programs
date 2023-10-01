#include<stdio.h>
int main()
{
    float inches, centimeters;
    printf("how many inches do you wanna convert into cm?\n");
    scanf("%f", &inches);
    centimeters = 2.54*inches;
    printf("%f centimeters", centimeters);
    return 0;
}
