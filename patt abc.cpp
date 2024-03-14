#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char ch='A',temp;
	
	temp=ch;
	for(i=1;i<=5;i++)
	{
		temp=ch;
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				printf(" %c",temp);
				temp++;
				
			}
			
			
		}
		
		printf(" \n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
