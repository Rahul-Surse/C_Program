#include<stdio.h>
#include<conio.h>


int main()
{
	int a[5],i,lim,maxx=0;
	lim=sizeof(a)/sizeof(a[0]);
	printf("\nenter the element of array\n");
	
	for(i=0;i<lim;i++)
    {
    	scanf("\n%d",&a[i]);
    }
	 
	 printf(" \n display array\n");
	 
	 for (i=0;i<lim;i++)
	 {
	 	
	 	printf("%d\t",a[i]);
	 	if(a[i] > maxx)
	 	{
	 		maxx=a[i];
		 }
	 		 		 		
	 }
	 printf("\n maxx : %d",maxx);
	
	
	
	
	
	
	
}
