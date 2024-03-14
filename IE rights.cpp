#include<stdio.h>



int main()
{
	int A;
	
	printf("enter the number of article ");
	scanf(" %d",&A);

    if (A>=14 && A<=18)	
    {
    	printf("Right to equality");
	}
	else if (A>=19 && A<=22)	
    {
    	printf("Right to freedom");
	}
	else if (A==23 || A==24)	
    {
    	printf("Right to Exploitation");
	}
	else if (A>=25 && A<=28)	
    {
    	printf("Right to freedom of religion");
	}
	else if (A==29 || A==30)	
    {
    	printf(" cultural and educational rights");
	}
	else if (A>=32 && A<=35)	
    {
    	printf("Right of constitution remedies");
	}
	else if (A==31)	
    {
    	printf("Rights related to property");
	}
	else 
	{
		printf(" invalide");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
