#include<stdio.h>

int main()
{
	int  num,*ptr,*ptr1,rem,num1,count=0;
    
    printf("\n enter the number \n");
    scanf("%d",&num);
    ptr=&num;
    while(num>0)
    {
       rem=*ptr%10;
       count++;
       ptr1=&count;
       num1=num/10;
       num=num1;
	}
	printf("\n display the number of digit \n");
    printf("\n %d\n",*ptr1);
}
