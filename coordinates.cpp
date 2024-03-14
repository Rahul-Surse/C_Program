#include<stdio.h>
#include<math.h>

int main ()
{
	
	float x1,x2,y1,y2,d,a,b;
	
	printf("enter point A coordinates");
	scanf("%f%f",&x1,&y1);
	
	printf("enter point B coordinates");
	scanf("%f%f",&x2,&y2);
	
	a=(x2-x1)*(x2-x1);
	b=(y2-y1)*(y2-y1);
	
	d=sqrt(a+b);
	printf("d=%f",d);
	
	
	
}
