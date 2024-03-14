#include<stdio.h>
#include<string.h>
int main(){
	char name[4];
	printf("\nEnter string value\n");
	gets(name);
	int l =strlen(name);
	
	printf("\nLength of string is %d\n",l);
	return 0;
}
