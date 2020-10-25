#include <stdio.h>
#include <stdlib.h>
#define PAYRATE 12
int main()
{
        int timeWorked = 0;
	double overTime = 0.0;
   	double gross_pay = 0.0;
   	double totalTax = 0.0;
   	double netPay = 0.0;
	printf("how many hours did you work in this total week\n");
	scanf("%d",  &timeWorked);
	if(timeWorked > 40)
	{
		overTime = timeWorked - 40;
		timeWorked = 40 + (overTime * 1.5);
		gross_pay = 12 * timeWorked;
	}
	else
	{
		gross_pay = 12 * timeWorked;
	}
	printf("Gross pay of your work = %.2f\n", gross_pay);
	if(gross_pay <= 300)
	{
		totalTax = gross_pay * (0.15);
		printf("tax is %.2f\n", totalTax);
		netPay = gross_pay - totalTax;
		printf("finally the net pay is %.2f\n", netPay);
	}
	else if(gross_pay > 300 && gross_pay <= 450)
	{
		totalTax = 300 * (0.15) + (gross_pay-300) *  (0.2);
		printf("tax is %.2f\n", totalTax);
		netPay = gross_pay - totalTax;
		printf("finally the net pay is %.2f\n", netPay);
	}
	else
	{
		totalTax = 300 * (0.15) + 150 * (0.2) + (gross_pay - 450) * (0.25);
		printf("tax is %.2f\n", totalTax);
		 netPay = gross_pay - totalTax;
		 printf("finally  the net pay is %.2f\n", netPay);
	}
	return 0;
}

	

