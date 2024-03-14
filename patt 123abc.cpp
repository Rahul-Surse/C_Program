#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a,i,j;
	a=1;
	char ch;
	ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if (i%2==0)
			{
				printf("%c \t",ch);
				ch++;
			}
			else 
			{
				printf("%d \t",a);
				a++;
			}
			
		}
		
		printf("\n");
		
	}
	
	
	
	
	
	
}
