#include<stdio.h>
#include<conio.h>

int main()
{
	
	int j,k,h,flag=0;
	
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
	int b[j],count=0;
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	    b[i]=a[i];
	}
	for(int i=0;i<len;i++)
	{
		for(int j=(i+1);j<len;j++)
		{
		if(a[i]==a[j])
		{
			count++;
		}
		if(count>len/2)
		{
			flag=1;
			break;
		}	
			
		}
		
	}
	if(flag==1)
	{
		printf("\n majority\n");
	}
	else
	{
		printf("\n not majority");
	}
	
	
	
	
}
	
