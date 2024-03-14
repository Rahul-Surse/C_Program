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
      
    printf("\n arrays after sorting\n");
	for(int i=0;i<len;i++)
	{
		for(int j=(i+1);j<len;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
	    }
      printf("\n%d\t",a[i]);	
    }
}
