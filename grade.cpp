#include<stdio.h>



int main ()
{
	float phy, chem, bio, math, comp,tot,per;
	
	printf("marks of five subjects",phy,chem,bio,math,comp);
	scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);
	
	tot=phy+chem+bio+math+comp;
	printf("total = %f",tot);
	
	per= (tot/500) * 100;
	printf("\npercentage=%f",per);
	
	per>=90 ? printf("Grade A"):
	per>=80 ? printf("Grade B"):
	per>=70 ? printf("Grade C"):
	per>=60 ? printf("Grade D"):
	per>=40 ? printf("Grade E"):printf("Grade F");
	
	
	
	
	
	
	
}



