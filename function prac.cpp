#include<stdio.h>
#include<conio.h>
int main ()
{
	void prime(int num); //dec
	int num;
	printf("\nenter the number\n");
	scanf("%d",&num);
	prime(num);//call
}


void prime(int num)//def
{
	int flag=1;
   for(int i=2; i<=num/2; i++)
   {
   	  if(num%i==0)
   	  {
   	  	flag=0;
   	  	break;
	  }
   	
   }
   
   if(flag==1)
   {
    printf("prime number");
   }
   else 
   {
   	printf(" not prime number");
   }
	
	
	
}
