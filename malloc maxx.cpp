#include<Stdlib.h>
#include<stdio.h>

int main()
{
	int a,*ptr=NULL,maxx=0;
	a=5;
	
    ptr=(int*)malloc(sizeof(a));
	
	printf("enter the element of array\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}

      printf("\ndisplay the array\n");

	for(int i=0;i<5;i++)
	{
		printf("%d\t",ptr[i]);
	
	}
	 printf("\ndisplay the maxx\n");
	for(int i=0;i<5;i++)
	{
	   if(ptr[i]>maxx5)
	   {
	   	 maxx=ptr[i];
	   }
	
	}
	printf("%d\t",maxx);
}
