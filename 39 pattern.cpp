#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
	  for(j=1;j<=5;j++)
	  {
	  	if(((i==1) && (j<=5)) || ((i==3) && (j<=5)) || ((i==5) && (j<=5)) || ((j==1) && (i<=5)) || ((j==3) && (i<=5)) || ((j==5) && (i<=5))) 
	  	printf("*\t");
	  	
	  	else 
	  	printf(" \t");
	   
      }	
		printf("\n");
	}
	
	

	
	
}
