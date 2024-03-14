#include<stdio.h>
int main()
{
	int i,count;
	char name[10];
	printf("\n enetr name \n");
    gets(name);
	printf("\n my name is %s \n",name);
	for(int i=0;name[i]!='\0';i++)
	{
		 printf("\n %c",name[i]);
	}
	
	count=0;
	for(int i=0;name[i]!='\0';i++)
	{
		count++;
	}
   
   printf(" \nthe number of charracter =%d",count);
	
}
