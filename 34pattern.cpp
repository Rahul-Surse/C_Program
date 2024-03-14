#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	 
	  for(i=1;i<=5;i++)
	  {
	  	for(j=1;j<=7;j++)
	  	{
	  		if((i+j<5) || (i+j>=9))
	  		{
	  			printf(" \t");
			}

            else
			{
				printf("*\t");
		    }	  	
	  		
	  		
		}

		printf("\n");	  	
	  	
	  }
	
}
	
	
	
