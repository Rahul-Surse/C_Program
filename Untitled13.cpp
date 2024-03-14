#include<stdio.h>

int main()
{
   void even(int);
   int no;
   printf("enter the number");
   scanf("%d",&no);
 even(no);
}

int i=1;
void even(int x)
{
    if(x<1)
	{
		printf("\n end");	
	}	
	else
	{
		
		printf("%d\n",x);
		even(x-1);
	}
	
}
