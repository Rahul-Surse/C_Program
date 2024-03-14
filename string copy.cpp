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
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

	printf("the first string is %s\n",str1);
	printf("the second string is %s\n",str2);
	
}
