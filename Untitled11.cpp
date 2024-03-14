#include<stdio.h>

int main()
{
   void natuNo(int);
   int no;
   printf("enter the number");
   scanf("%d",&no);
  natuNo(no);
}

int i=1;
void natuNo(int x)
{
    if(x<1)
	{
		printf("\n end");	
	}	
	else
	{
		
		printf("%d\n",x);
		natuNo(x-1);
	}
	
}
