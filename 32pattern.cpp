#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j;
	char ch;
	
	for(i=1;i<=5;i++)
	{
		a=1;
		ch='A';
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
			
			printf("%d\t",a);
			a++;
		}
		
			else
			{
		
			printf("%c\t",ch);
			ch++;
		}
		}
       printf(" \n");	
		
		
	}
	
	
	
	
	
	
}
