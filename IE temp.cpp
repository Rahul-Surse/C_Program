#include<stdio.h>
#include<math.h>



  int main()
{
	
	float temp;
	printf("enter temp = ",temp);
	scanf("%f",&temp);
	
	if (temp<0) 
	{
	 printf(" Freezing weather");
    }
    
 	else if (temp>=0 && temp<10 )
	 {
	   printf("very cold weather");
     }
     
	else if (temp>=10 && temp<20 )
	{
	 printf("cold weather");
    }
    
	else if (temp>=20 && temp<30 ) 
	{
	 printf(" normal in temperature");
    }
	  
	else if (temp>=30 && temp<40)
	{
	  printf(" its hot"); 
    }
	else
	 {
	   printf(" it is very hot");
	 }
	
	
	
	
	
}
