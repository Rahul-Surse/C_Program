#include<stdio.h>
#include<conio.h>


int main()
{
	int num,a,i,lim,count,sum=0,p1,p2;
	
	printf("enter the limit");
	scanf("%d",&lim);
	i=1;
	while(i<=lim){
		    count=0;
		    a=1;
		  while(a<=i){
		  	if(i%a==0){
		  		count++;
			  }
		  	
		  			  			  	
		  	a++;
		  
			if((count==2) && (i!=1)){
				p1=i;
				sum = sum+p1;
			}
	
		}
			
			}	
		i++;
	}
	    
	

