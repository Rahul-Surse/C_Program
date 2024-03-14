#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int len=0;
	char str [10];
	printf("\n Enter the string\n");
	gets(str);
	printf("\n The length of string\n");
	for(int i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("%d\t",len);
	
}
