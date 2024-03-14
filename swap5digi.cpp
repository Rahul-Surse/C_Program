#include<stdio.h>
#include<conio.h>


int main()
{
 int no=12345;
 
 
 
 int rem=no%10;
 int first =rem*10000;
 printf("last goes to first %d",first);
 
  
 int last=no/10000;
 printf("first goes to last",last);
 
 
 int mid=(no/10)%1000;
 printf("middle number %d",mid);
 
 int fno=0;
 fno = first +(mid*10)+last;
   printf(" final number %d,fno");
   
   
 getch();
 }
