#include<stdio.h>


int main()
{
	float A;
	printf(" enter Angle of wave");
	scanf(" %f",&A);
	
	if (A>103 && A<=142)  
     {
     	printf("primary waves");
	 }	
	
	else if ((A>0 && A<103) || (A>142 && A<=180) )
     {
     	printf("secondary waves");
	 }	
	 
	else if (A==0)
     {
     	printf(" surface waves ");
	 }	
	 
	 else 
	 {
	 	printf(" invalide");
	 }
	 

	
	
	
	
}



