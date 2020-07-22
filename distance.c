#include<stdio.h>
#include<math.h>
int main()
{
	int u, time, acceleration;
	float distance;
	printf("enter the value of intial velocity\n");
	scanf("%d", &u);
	printf("enter the value of acceleration\n");
	scanf("%d", &acceleration);
	printf("enter the time taken by the object to travel\n");
	scanf("%d", &time);
	distance = (u*time)+ 0.5 *(acceleration*(time*time));
	printf("total distance travelled by the vehicle is %f", distance);
	return 0;
}
