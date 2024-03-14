#include<stdio.h>
#include<conio.h>

int main()
{
	void areaofrec(int,int);
	int l,w;
	printf("\nenter the lenth of rectangle\n");
	scanf("%d",&l);
	
	printf("\nenter the width of rectangle\n");
	scanf("%d",&w);
	
	areaofrec(l,w);
}

    void areaofrec(int l, int w)
    {
    	int result;
    	result=l*w;
    	printf(" area of rectangle = %d",result);
	}
