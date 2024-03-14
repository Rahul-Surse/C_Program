#include<stdio.h>
int main()
{
	char name[10];
	printf("\n enetr name \n");
     gets(name);
	printf("\n my name is %s \n",name);
	for(int i=0;name[i]!='\0';i++)
	{
		 printf("\n %c",name[i]);
	}
   
	
}
