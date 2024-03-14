#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,sum,j;

	 sum=0;
     a=0;
     b=1;
	for(i=1;i<=5;i++)
	{
	    
		for(j=1;j<=5;j++)
		{
			
			if(j<=i)
			{
				sum=a+b;
				printf(" %d\t",sum);
				a=b;
				b=sum;
				
			}
			
			
		}
        
		
		printf(" \n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
