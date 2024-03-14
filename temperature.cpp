#include<stdio.h>
#include<math.h>



  int main()
{
	
	float temp;
	printf("enter temp = ",temp);
	scanf("%f",&temp);
	
	temp<0 ? printf(" Freezing weather"):
	temp>=0 && temp<10 ? printf("very cold weather"):
	temp>=10 && temp<20 ? printf("cold weather"):
	temp>=20 && temp<30 ? printf(" normal in temperature"):
	temp>=30 && temp<40 ? printf(" its hot") : printf(" it is very hot");
			
}
