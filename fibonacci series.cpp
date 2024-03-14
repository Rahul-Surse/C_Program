#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,num1=0,sum=0,num2=1;
	printf("enter the limit for fibonic series");
	scanf("%d",&n);
	
   i=1;
   while(i<=n)
   {
   	 sum=num1+num2;
   	 num1=num2;
   	 num2=sum;
   	 printf("%d\n",sum);
   	 i++;
     
	 
}
}
