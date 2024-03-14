#include<stdio.h>
#include<conio.h>


int main()
{
	int d1,r1,r2,r3,r4,sum=0;
	printf("enter the digits");
	scanf("%d",&d1);
	
	r1=d1%10;    
		
	d1=d1/10;    
	r2=d1%10;       
	
	d1=d1/10;    
	r3=d1%10;      
	
	d1=d1/10;   
	r4=d1;     
	
	
	sum=r1+r2+r3+r4;
	printf("sum = %d",sum);
	getch();
	
	

}
