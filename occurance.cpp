#include<stdio.h>
#include<conio.h>

int main()
{
   int count=0,num,rem,i,temp;
   
   printf(" enter the number");
   scanf("%d",&num);
   i=0;
   while(i<=9){  
        count=0;
        temp=num;
        while(temp>0){
        	rem=temp%10;
        	if(rem==i){
        		count++;
			}
			temp=temp/10;
		}
		if(count>0){
			printf("the %d number occur %d time\n",i,count);
		}
		i++;
	 }
     num=num/10;
     

}
