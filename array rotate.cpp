#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3][3],i,j;
	int b[3][3];
	int c[3][3];
	
	printf("\n enter the value of 1st matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);		
		}	
	}
	
	
	printf("\n enter the value of 2st matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);		
		}	
	}
	
	
	printf("\n display the 1st matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n display the 2st matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n matrix after multiplication\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			c[i][j]=a[i][j] * b[i][j] + a[i][x] * b[x][j] + a ;
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
}
