#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j;
	 
	  for(i=1;i<=4;i++)
	  {
	  	a=1;
	  	for(j=1;j<=7;j++)
	    {
	    	if((j<i) || (j>3+i))
	    	{
	    		printf(" \t");
	    	}
	    	else
	    	{
	    		printf(" %d\t",a);
	    		a++;
			}
	    	
	    	
	    	
	    	
	    	
		
	  		
		}

		printf("\n");	  	
	  	
	  }
}
	
	
	
	
	
