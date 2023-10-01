#include<stdio.h>
int main()
{
    int principle, rate, time, interest;
    printf("Enter the principle :\n");
    scanf("%d", &principle);
    printf("Enter the rate\n");
    scanf("%d", &rate);
    printf("Enter the time\n");
    scanf("%d",  &time);
    interest = principle*rate*time/100;
    printf("The simple interest is %d", interest);
    return 0;
}
