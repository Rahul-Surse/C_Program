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
	printf("array is \n");
	
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
	int i,ind1,ind2,temp;
     printf(" \nenter the index where to rotate\n");
     scanf("%d",&ind1);
    
    printf("\nthe rotated array\n");
    for(i=ind1;i<len;i++)
    {
          
	   printf("%d\t",a[i]);

	}
	
	 for(i=0;i<ind1;i++)
    {
          
	   printf("%d\t",a[i]);

	}
	
	
	
	




}
