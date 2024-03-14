#include<stdio.h>

int main()
{
	int a[5],b[5],i,j,s,num,*ptr,*sum,mid,temp,end=4;
	ptr=&a[0];
	s=0;
	sum=&s;
	printf("\nenter array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}
	
	printf("\n display the array \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
		
	}
	
	mid=5/2;
	
	printf("\n reverse a array \n");
    for(i=0;i<mid;i++)
	{
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+end);
		*(ptr+end)=temp;
	    
		 end--;
	       
	}
	
    for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
		
	}


}

