#include<stdio.h>
int main()
{
    float dollar, rupees;
    printf("How many dollars should i translate?\n");
    scanf("%f", &dollar);
    rupees = 83.41*dollar;
    printf("%f", rupees);
    return 0;

}
