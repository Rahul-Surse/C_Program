#include<stdio.h>
int main()
{
	void areaofcir(int);
	int radius;
	printf("enter the radius of circle");
	scanf("%d",&radius);
	areaofcir(radius);	
}

   void areaofcir(int radius)
   {
   	  int area;
   	  area=3.14*(radius*radius);
   	  printf("\nArea = %d",area);
   }
