#include<stdio.h>
#include<conio.h>


int main ()
{
	int no,a,b,c,d;
	printf("print value");
	scanf("%d",&no);
	
	a=no%10;
	
	no=no/10;
	b=no%10;
	
	no=no/10;
	c=no;
	
	(a==c) ? printf("palindrome") : printf("not palindrome");
	
	
	getch();
	
	
}
	
	
	
	

