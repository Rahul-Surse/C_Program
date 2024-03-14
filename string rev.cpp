#include<stdio.h>
int main()
{
	int i,count,rev,mid,len=0;
	char name[10];
	printf("\n enetr name \n");
    gets(name);
	printf("\n my name is %s \n",name);

	for(int i=0;name[i]!='\0';i++)
	{
		 len++;
	}

	for(int i=len-1;i>=0;i--)
	{
		printf("%c",name[i]);
		
	}

   
   printf(" \nthe number of charracter =%d",len);
	
}
