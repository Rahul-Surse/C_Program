#include<stdio.h>
#include<math.h>



int main()
{
	float bs, gs1, gs2, gs3;
	printf(" enter basic salary");
	scanf("%f",&bs);
	
	gs1= bs + (bs*20/100)+(bs*80/100);
	gs2= bs + (bs*25/100)+(bs*90/100);
	gs3= bs +(bs*30/100)+(bs*95/100);
	
	if(bs<=10000)
	{
		printf("gross salary=%f",gs1);
		
	}
	else if (bs<=20000)
	{
		printf("gross salary=%f",gs2);
	
	}
	if (bs>20000)
	{
		printf("gross salary=%f",gs3);
	}
	
	
	
	
	
	
}
