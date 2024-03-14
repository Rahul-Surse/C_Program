#include<stdio.h>

int main()
{
   void alphabet(char);
   char input;
   printf("enter the last character");
   scanf("%c",&input);
   alphabet(input);
}

char i='a';
void alphabet(char x)
{
    if(x<'a')
	{ 
		printf("\n end");	
	}	
	else
	{
		
		printf("%c\n",i);
		i++;
		alphabet(x-1);
	}
	
}
