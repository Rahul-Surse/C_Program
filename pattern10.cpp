#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char a,b,temp;
	
	
	a='A';
	b='A';
	for(i=1;i<=5;i++)
	{
		a=b;
		for(j=1;j<=5;j++)
		{
		  temp=a;
		  printf("%c",temp);
		  a++;
			
		}
		b++;
	
	
	
		
		printf("\n");
		
	 } 
	
	
	
	
}
