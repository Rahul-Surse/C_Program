#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10], str2[10];
	printf("\n Enter the first string \n");
	gets(str1);
	printf("\n Enter the second string \n");
	gets(str2);
   
    int value=strcmp(str1,str2);
    if(value==0)
    {
    	printf("\n strings are equal \n");
	}
	else
	{
		printf("\n strings are not equal \n");
	}
return 0;
}
