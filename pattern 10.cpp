#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j%2==1)
			{
				printf("%d\t",a);
				a++;
			}
			else
			{
				printf("*\t");
			}
			
		}
		printf("\n");
		
	}
	
	
	
	
}
