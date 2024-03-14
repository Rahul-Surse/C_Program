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
	
	int b[5];
	len=sizeof(a)/sizeof(a[0]);
	
	printf(" \ncopied array\n");
	int i;
	for(i=0;i<len;i++)
	{
		b[i]=a[i];
		printf("%d\t",b[i]);
		
		
	}
	
	
	
	
	
	
	
}
