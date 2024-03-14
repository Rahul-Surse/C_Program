#include<stdio.h>
#include<conio.h>


int main()
{
	int no,d1,d2,r1,r2,r3,r4,rs,s;
	printf("enter the digits");
	scanf("%d",&no);
	
	r1=d1%10;    
		
	d1=d1/10;    
	r2=d1%10;       
	
	d1=d1/10;    
	r3=d1%10;      
	
	d1=d1/10;   
	r4=d1;     
	
	
	s=r1+r2+r3+r4;
	printf("s = %d\n",s);
	
	
	d1=s%10;
	d2=s/10;
	
	rs=d1*10+d2;
	printf("\nrs=%d\n",rs);
	
	
	((rs)*(s)==no) ? printf("magic number") : printf("not magic number");
	getch();
	

}
