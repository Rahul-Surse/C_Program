#include<stdio.h>
#include<conio.h>
int main()
{
	void areaoftrian(float,float);
	float b,h;
	printf("\nenter the base of triangle\n");
	scanf("%f",&b);
	
	printf("\nenter the height of triangle\n");
	scanf("%f",&h);
	
	areaoftrian(b,h);
}

    void areaoftrian(float b, float h)
    {
    	float result;
    	result=1.0/2* b*h;
    	printf(" area of triangle = %0.2f",result);
	}
