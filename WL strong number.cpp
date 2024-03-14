#include<stdio.h>

int main()
{
	int num;
	 printf("enter the number");
	 scanf("%d",&num);
	 
	 int num1=num;
	 
	 int sum=0,fact,rem;
	 while(num>0)
	 {
	 	rem=num%10;
	 	fact=1;
	 
	 
	 int i=1;
	 while(i<=rem ){
	 	fact=fact*i;
	 	i++;
	 }
	 sum=sum+fact;
	 num=num/10;
}
   
if (sum==num1)
     printf("strong number");
     
     else 
        printf("not a strong number");
	 	
    
}
