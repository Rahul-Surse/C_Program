#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[40],i,j,len,temp,end;
	len=40;
	printf("\n Enter aditya L 1 message inthe form of number series");
	for(i=0;i<40;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("\n the array of number series which enter \n");
	
	for(i=0;i<40;i++)
	{
	  printf("%d\t",a[i]);
		
	}
	printf("\n the reverse array  \n");
	int mid;
	len=40;
	mid=len/2;
	end=len-1;	
	for(i=0;i<mid;i++)
	{
	   temp=a[i];
	   a[i]=a[end];
        a[end]=temp;
        end--;
    }
    for(i=0;i<40;i++)
	{
	  printf("%d\t",a[i]);
		
	}
	
	printf("\n decoded message of adtiya l-1 \n");
    for(i=0;i<40;i++)
	{
		a[i]=a[i]-5;
	  printf("%c",a[i]);
		
	}
	
	
	
	
	
}

