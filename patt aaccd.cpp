#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char ch='A',ch2='A',temp;
	
	temp=ch;
	for(i=1;i<=5;i++)
	{
	    
		for(j=1;j<=5;j++)
		{
			ch2=ch;
			if(j<=i)
			{
				printf(" %c",ch);
				ch++;
				
			}
		
			
		}
        	ch++;
		
		printf(" \n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
