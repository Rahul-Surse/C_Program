#include<stdio.h>


int main()
{
	float den, dis;
	printf(" enter the distance and density");
	scanf(" %f%f",&dis,&den);
	
	if( (dis>0 && dis<=100) && (den>0 && den<=2.8)) 
     {
     	printf("crust");
	 }	
	
	else if( (dis>100 && dis<=2900) && (den>2.8 && den<=4.6)) 
     {
     	printf("mantle");
	 }	
	 
	else if( (dis>4.6 && dis<=5100) && (den>4.6 && den<=10.5)) 
     {
     	printf("outercore");
	 }	
	 
	 else if( (dis>5100 && dis<=6400) && (den>10.5)) 
     {
     	printf("innercore");
	 }	
	 
	 else 
	 {
	 	printf(" invalide");
	 }
	
	
	
	
}



