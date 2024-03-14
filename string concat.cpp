#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int len=0;
	char str1[10], str2[10], temp[10];
	printf("\n Enter the first string \n");
	gets(str1);
	printf("\n Enter the second string \n");
	gets(str2);
    strcat(str1,str2);
    printf("\n %s",str1);
	
}
