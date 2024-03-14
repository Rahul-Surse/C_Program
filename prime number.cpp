#include<stdio.h>
#include<conio.h>
int main()
{
	int num,count,i;
	
	printf("enter the number");
	scanf("%d",&num);
	
	i=1;
	while(num>=i){
		
		if (num%i==0){
		count++;
	}
		i++;
	}
	
	printf("%d",count);

	if(count==2){
	
	    printf("it is a prime number");
      }
	    else{
		 
	    printf("it is not a prime number");
	}
}
