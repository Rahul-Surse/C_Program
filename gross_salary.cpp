#include<stdio.h>
#include<conio.h>


int main()
{
	float gs,wd,pds,bs,A1,A2;
	printf("number of working days ");
	scanf("%f",&wd);
	
	printf("per day salary");
	scanf("%f",&pds);
	
	bs=wd*pds;
	printf("basic salary=%f",bs);
	
	A1=bs*20/100;
	A2=bs*40/100;
	
	gs=bs+A1+A2;
	printf("gross salary=%f\n",gs);
	
	
	
	
	
	
	
	
	getch();
}
