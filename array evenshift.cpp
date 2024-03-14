#include<stdio.h>
#include<conio.h>

int main()
{
	
	int i;
	printf("\nenter the length of an array\n");
	scanf("%d",&i);
	
	int a[i],len;
	
	len=sizeof(a)/sizeof(a[0]);
	printf("\nenter the value in array\n");
	
	for(int i=0;i<len;i++)
	{
		
		scanf("%d",&a[i]);
		
    }
	printf("\narray is\n");
	
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf(" \narray after shifting event at end of an array\n");
	
    for(int i=0;i<len;i++)
	{
		if(a[i]%2!=0)
		{
		
		printf("%d\t",a[i]);
	    }
	}
	 for(int i=0;i<len;i++)
	{
		if(a[i]%2==0)
		{
		
		printf("%d\t",a[i]);
	    }
	}
	
	
	
	
	
}
