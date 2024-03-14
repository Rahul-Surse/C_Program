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

     printf(" \nall prime numbers from array is \n");
	
	
	int i,j,flag=0;
	for(i=0;i<len;i++)
	{
		flag=0;
		if(a[i]<=1)
		{
			flag=1;
		}
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0) 
			{
				flag=1;
			}
		}
		if(flag==0){
		
		printf("%d\t",a[i]);
	}
}

}


