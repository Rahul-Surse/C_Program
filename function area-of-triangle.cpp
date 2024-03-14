#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	void areaoftrian(int,int);
	int b,h;
	printf("\nenter the base of rectangle\n");
	scanf("%d",&b);
	
	printf("\nenter the height of rectangle\n");
	scanf("%d",&h);
	
	areaoftrian(b,h);
}

    void areaoftrain(int b, int h)
    {
    	int result;
    	result=1/2 *b*h;
    	printf(" area of rectangle = %d",result);
	}
