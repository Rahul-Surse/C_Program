#include<stdio.h>
#include<string.h>
struct Time
{
	int hours;
	int minutes;
	int seconds;
	
};

int main()
{
	struct Time t1,t2;
	
	printf("\n enter the 1st time in format( hour/min/sec)\n");
	scanf("%d%d%d",&t1.hours,&t1.minutes,&t1.seconds);
  	
	printf("\n enter the 2nd time in format( hour/min/sec)\n");
	scanf("%d%d%d",&t2.hours,&t2.minutes,&t2.seconds);
	
	printf("\n display 1st time ");
	printf("%d\t%d\t%d",t1.hours,t1.minutes,t1.seconds);
	printf("\n display 2st time ");
	printf("%d\t%d\t%d",t2.hours,t2.minutes,t2.seconds);	
}
