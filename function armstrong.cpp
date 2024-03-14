#include<stdio.h>
#include<conio.h>
int main ()
{
	void prime(int); //dec
	int num;
	printf("\nenter the number\n");
	scanf("%d",&num);
	prime(num);//call
}


void prime(int num)//def
{
    int rem;num2;
    rem=num%10;
    num=num/10;
    num1=num;
   
   if(flag==0)
   {
    printf("prime number");
   }
   else 
   {
   	printf(" not prime number");
   }
	
	
	
}
