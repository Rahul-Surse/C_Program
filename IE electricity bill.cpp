#include<stdio.h>

int main()
{
	float u,charges;
	
	printf("enter the units");
	scanf("%f",&u);
	
	if (u<50)
	{
		charges=u*0.50;
		printf("charges=%f",charges);
	}
	
	else if(u<100)
	{
		charges=u*0.75;
		printf("charges=%f",charges);
	}
	
	else if(u<=150)
	{
		charges=u*1.20;
		printf("charges=%f",charges);
		
	}
	else if(u>150)
	{
		charges=u*1.50;
		printf("charges=%f",charges);
		
	}
	else
	printf("invalide input");
}
