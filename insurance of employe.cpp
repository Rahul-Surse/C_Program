#include<conio.h>
#include<stdio.h>

int main()
{
	int A;
	char gen,mari;
	
	printf("enter the age:");
	scanf("%d",&A);
	
	  _flushall();
	 
	printf("enter the gender (M/F)\n",gen);
	scanf("%c",&gen);
	 
	  _flushall();
	 
	printf(" enter marital status (m/u)\n");
	scanf("%c",&mari);
	
	if((A>30) && ((mari= 'm') || (mari = 'u')) && (gen = 'M'))
	  printf("eligible");
	
	 else if((A>25) &&  (mari = 'u') && (gen = 'F'))
	   printf(" eligible");
	   
	   else 
	    printf("not eligible");
}
