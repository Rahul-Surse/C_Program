#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	void rev(int);
	int num1;
	printf("\nenter the number\n");
	scanf("%d",&num1);
    rev(num1);
    
    return 0;
}

    void rev(int num1)
    {
       int rem,result;
       result=0;
       while(num1!=0)
       {
       	   rem=num1%10;
       	   result=result*10+rem;
       	   num1=num1/10;
	   }
	   printf("\nthe reverse number = %d\n",result);
	}
