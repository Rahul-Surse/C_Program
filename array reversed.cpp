#include<stdio.h>
#include<conio.h>

int main()
{
	
	int a[5],len;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter the value in array\n");
	
	for(int i=0;i<len;i++)
	{
		
		scanf("%d",&a[i]);
		
    }
	printf("vlaues in array\n");
	
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf(" \nreverse array\n");
	
	for(int i=(len-1);i>=0;i--)
	{
		
		printf("%d\t",a[i]);
		
		
	}








}




