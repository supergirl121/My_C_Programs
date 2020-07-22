#include<stdio.h>
int main()
{
	int mod_value, quotient;
	int sum = 0;
	int num ;
	printf("please enter the value of num\n");
	scanf("%d", &num);
	while(num>0)
	{
		mod_value = num % 10;
		sum = sum + mod_value;
		num = num / 10;
		num = (int)num;
	}
	printf("%d", sum);
	return 0;
}
