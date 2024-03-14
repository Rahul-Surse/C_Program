#include<stdio.h>
#include<conio.h>


int main()
{
	int a[5],i,len,max,min;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
					
    }
    printf("display array");
    
    for(i=0;i<len;i++)
    {
    	printf(" %d",a[i]);
    	if (i==0){
    		max = min = a[i];
		}
		else
		{
		
    	if(a[i]>max)
    	{
    		max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	}
	printf(" \nmaxx : %d",max);
		printf(" \nmin : %d",min);
	
	
	
	
	
	
	
	
}
