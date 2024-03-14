#include<stdio.h>
#include<conio.h>


int main()
{
 int r1,r2,r3,no;
 printf("value of no");
 scanf("\n%d",&no);
 r1=no%10;
 no=no/10;

 r2=no%10;
 no=no/10;

 r3=no%10;
  no=r1*100+r2*10+r3;
  printf("%d",no);

 getch();
 }
