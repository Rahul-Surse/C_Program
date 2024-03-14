#include<stdio.h>
#include<conio.h>

int main()
{
	
	int a[5],len,flag=0;
	
	len=sizeof(a)/sizeof(a[0]);
	printf("\nenter the value in array\n");
	
	for(int i=0;i<len;i++)
	{
		
		scanf("%d",&a[i]);
		
    }
	printf("vlaues in array\n");
	
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	int b;
	printf("enter the element ");
	scanf("%d",&b);
	
	for(int i=0;i<len;i++)
	{
		if(a[i]==b)
		{
			flag=1;
		  break;	
		}
	
		
				
	}
		if(flag==1)
		{
		  printf(" found ");
		 	
		}
		else
		{
			printf(" not found");
		
		}
	
	
	
	
}
