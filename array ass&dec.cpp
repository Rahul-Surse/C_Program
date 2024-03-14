#include<stdio.h>
#include<conio.h>

int main()
{
	
	int j;
	
	printf("enter the size of aray");
	scanf("%d",&j);
	
	int a[j],len;
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
	
	
	printf("\n array in assending order \n");
	for(int i=0;i<len;i++)
	{
		for(int j(i+1);j<len;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
			
		}
		printf("%d\t",a[i]);
	}
	
	
		printf("\n array in decending order \n");
	for(int i=0;i<len;i++)
	{
		for(int j(i+1);j<len;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
			
		}
		printf("%d\t",a[i]);
	}
}
