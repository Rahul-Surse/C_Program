#include<stdio.h>
#include<conio.h>

int main()
{
	int s,len1,len2;
	printf("enter the size of array");
	scanf("%d",&s);
	int a[s],b[s],i;
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(a[0]);
	
	printf("\nenter the value of first array\n");
	for(i=0;i<len1;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("\nenter the value of second array\n");
	for(i=0;i<len2;i++)
	{
		scanf("%d",&b[i]);
		
	}
	
	printf("\ndisplay the first array\n");
	for(i=0;i<len2;i++)
	{
		printf("\n%d\t",a[i]);
		
	}
	
	
	printf("\ndisplay the second array\n");
	for(i=0;i<len2;i++)
	{
		printf("\n%d\t",b[i]);
		
	}
	int j,len3,S;
	S=s+s;
	int c[S];
	len3=sizeof(a)/sizeof(a[0]);
	printf("\n array after the merge ");
	for(i=0;i<len3;i++)
	{
		c[i]=a[i];
		printf("%d\t",c[i]);
					
	}
	
		for(j=0;j<5;j++)
		{
			c[i]=b[j];
			printf("%d\t",c[i]);
		}
		
	
	
	
	
}
