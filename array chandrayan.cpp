#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[12],b[6],i,j,len,temp,end;
	len=12;
	printf("\n Enter chandrayan message inthe form of number series");
	for(i=0;i<12;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("\n the array of number series which enter \n");
	
	for(i=0;i<12;i++)
	{
	  printf("%d\t",a[i]);
		
	}
	printf("\n the reverse array  \n");
	int mid;
	len=12;
	mid=len/2;
	end=len-1;	
	for(i=0;i<mid;i++)
	{
	   temp=a[i];
	   a[i]=a[end];
        a[end]=temp;
        end--;
    }
    for(i=0;i<12;i++)
	{
	  printf("%d\t",a[i]);
		
	}
	
	printf("\n the array after subtraction  \n");
    for(i=0;i<12;i++)
	{
		a[i]=a[i]-4;
	  printf("%c\t",a[i]);
		
	}
	
	
	
	
	
}
