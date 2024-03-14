#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
         if ((i<=4) && (j<=i) || (j>=8-i)) 	
		 printf(" *");	
		 
	
		 
		 else if ((i>=5) && ((j<=8-i) || (j>=i )))
		      printf(" *");
		 else
		  printf("  ");
		
		}
		
		printf("\n");
		
		
		
	}
}
