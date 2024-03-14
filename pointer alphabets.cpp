#include<stdio.h>

int main()
{

	char ch,ch2,*ptr1;
	ch2='z';
	ch='a';
    printf("\n\n alphabets from 'a' to 'z'  \n");
	while(ch<=ch2)
	{
		ptr1=&ch;
		printf("%c\t",*ptr1);
		ch++;
		
	 } 
	
	
}
