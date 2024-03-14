#include<stdio.h>

int main()
{
	int  num,first,last,*ptr,*ptr1,ptr2,ptr3,rem,num1,count=0;
    
    printf("\n enter the number \n");
    scanf("%d",&num);
    ptr=&num;
    while(count<=0)
    {
       rem=*ptr%10;
       first=rem;
       count++;
       ptr1=&count;
       num1=num/10;
       num=num1;
	}
	printf("\n last num = %d\n",first);
	  while(num<=0)
    {
       rem=*ptr%10;
       last=rem;
       ptr1=&count;
       num1=num/10;
       num=num1;
	}
	
	printf("\n first num = %d\n",last);
    printf("\n %d\n",*ptr1);
}
