#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
		
			if (((i<=4) && (j<=3+i) && (j>=5-i)))  
				printf("*\t");
				
		
			  
		else if ((i>4) && (j>=i-3) && (j<=11-i))
			printf("*\t");
		     else
			 printf(" \t");
		}
		
		printf("\n");
		
		
		
	}
}
