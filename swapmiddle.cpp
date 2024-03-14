#include<stdio.h>
#include<conio.h>

int main()
{
	
	int r1,r2,r3,r4,r5,r6,no;             
	
	
	printf("Enter value of a");
	scanf("\n%d",&no);
	
	
	r1=no/10000;   
	r5=no%10;
	no=no%10000;      
	no=no/10;     
	r2=no%10;     
	no=no%10;    
	r3=no%10;  
	r4=no/10;
	
	r6=r1*10000+r2*1000+r3*100+r4*10+r5;
	printf("\nr6=%d",r6);
	
	getch();
	
	

}
