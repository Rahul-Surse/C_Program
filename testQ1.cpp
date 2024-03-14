//Q 1. Write a c program to print following pattern.
//	
//		A 
//		A B A
//		A B C B A
//		A B C D C B A
//		A B C D E D C B A
//




#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	for( i=0;i<5;i++)
	{
		for(j=0;j<9;j++)
		{
			if(i+j<j)
			{
				printf(" *");
			}
			else{
				printf(" #");
			}
		}
		printf(" \n");
	}
	
}
