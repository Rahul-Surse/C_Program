#include<stdio.h>
#include<math.h>



int main()
{
	
	float bill,discount, total_bill;
	printf(" enter the amount of bill");
	scanf("%f",&bill);
	
	if (bill<1000)
	{
		discount=(bill*5)/100;
		printf("discount = %f",discount);
		
		total_bill = bill-discount;
		printf(" total bill = %f",total_bill);
		
    }
    
    
     else if (bill > 1000 && bill <=2500)
    {
    	discount = (bill*6)/100;
    	printf("discount = %f", discount);
    	
    	total_bill = bill-discount;
		printf(" total bill = %f",total_bill);
    	
   	} 
   	else if (bill > 2500 && bill <=5000)
    {
    	discount = (bill*7)/100;
    	printf("discount = %f", discount);
    	
    	total_bill = bill-discount;
		printf(" total bill = %f",total_bill);
    	
   	}
   	else if (bill > 5000 && bill <=10000)
    {
    	discount = (bill*8)/100;
    	printf("discount = %f", discount);
    	
    	total_bill = bill-discount;
		printf(" total bill = %f",total_bill);
    	
   	}
   	else if (bill > 10000)
    {
    	discount = (bill*10)/100;
    	printf("discount = %f", discount);
    	
    	total_bill = bill-discount;
		printf(" total bill = %f",total_bill);
    	
   	}
	return 0;
		
		
	
	
	
	
	
	
	
	
	
}







