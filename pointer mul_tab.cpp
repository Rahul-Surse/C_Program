#include<stdio.h>

int main()
{
	int  a,num,*ptr,*ptr1,mul=1;
    a=1;
    printf("\n enter the number \n");
    scanf("%d",&num);
    ptr=&num;
    printf("\n display the multiplication table of the number  \n");
    while(a<=10)
    {
    	mul=*ptr*a;
    	ptr1=&mul;
        printf("%d\t",*ptr1);
		a++;
	}
		
}
