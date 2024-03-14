#include<stdio.h>





int main()
{
	int ny,ys,sal,eps,ej,cy;
	
	printf(" year of joining");
	scanf("%d",&ej);
	
	printf(" current year ");
	scanf("%d",&cy);
	
	ny=cy-ej;
	
	printf("number of year = %d",ny);
	
	printf("\nenter salary of employee");
	scanf("%d",&sal);
	
	printf("enter performence score");
	scanf("%d",&eps);
	
	
	if (ys>2)
	{
		printf(" permanent employee");
		
	}
	 else if (sal>20000) 
	{
		printf(" permanent employee");
	}
	
    else if  (eps>75)
	{
		printf(" permanent employee");
	}
		
	else 
	{
		printf(" temporary employee");
		}	
		    
	return 0;	   		
     
	
	
	
}
