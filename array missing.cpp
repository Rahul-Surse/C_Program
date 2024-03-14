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
	
	
	printf("\n arrays after sorting\n");
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
	
	
	printf("\n missing element \n");
	int i,k;
	for( i=0;i<len;i++);
	{
		int f=a[i];
		int s=a[i+1];
		for( k=(f+1);k<s;k++)
		{
			
			printf("%d\t",k);
			
		}
		
	}
	


return 0;
}
	
	
