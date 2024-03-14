#include<stdio.h>
#include<conio.h>

int main()
{
	
	int a[5],len;
	len=sizeof(a)/sizeof(a[0]);
	printf("\nenter the value in array");
	
	for(int i=0;i<len;i++)
	{
		
		scanf("%d",&a[i]);
		
    }
	printf("vlaues in array\n");
	
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf(" \neven value\n");
	for(int i=0;i<len;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\t",a[i]);
			
		}
			
	}	
		
	printf("\nodd value\n");
	
	for(int i=0;i<len;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\t",a[i]);
		}
		
		
	}	
	
	
	
}
