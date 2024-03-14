#include<stdio.h>
#include<math.h>


int main ()
{
   int a,b;
	printf(" enter value of a b ");
	scanf("%d%d",&a,&b);
	  printf(" without swapping a= %d b=%d\n",a,b);
       a=a^b;
      //  printf("\n%d %d\n",a,b);
       b=a^b;
      //  printf("\n%d %d\n",a,b);
        a=a^b;
	printf("\n after swapping a= %d b= %d\n",a,b);
}
