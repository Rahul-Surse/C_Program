#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	
	int j,k,h;
	
	printf("\nenter the size of aray\n");
	scanf("%d",&j);
	
	int a[j],len;
	len=sizeof(a)/sizeof(a[0]);
	printf("\nenter the value in array\n");
	
	for(int i=0;i<len;i++)
	{
		
		scanf("%d",&a[i]);
		
    }
	printf("\nvlaues in array\n");
	
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
	
	
	
	int x,y,z,sum;
	x=0;
	y=1;
	sum=a[x]+a[y];
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			z=a[i]+a[j];
			if(abs(z)<sum)
			{
			   sum=z;
			   x=a[i];
			   y=a[j];
			   	
			}
			
			
		}
		
	}
	printf(" \nclosest to zero\n");
	printf("\tx=%d,\ty=%d",x,y);
	
	
	
	
}
