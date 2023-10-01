#include<stdio.h>
int main()
{
    float farenheit, celsius;
    printf("what is the reading of celsius scale?\n");
    scanf("%f", &celsius);
    farenheit = (9*celsius+160)/5;
    printf("%f", farenheit);
    return 0;
}
