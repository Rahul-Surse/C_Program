#include<stdio.h>
#include<conio.h>


int main()
{
	int a[5],i,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
					
    }
    printf("display array");
    
    for(i=0;i<len;i++)
    {
    	printf(" %d",a[i]);
	}
	
	
	
	
	
	
	
	
}
