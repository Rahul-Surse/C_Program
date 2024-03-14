#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	
	printf("\nprint capital vowels : ");
	for(i=65;i<=90;i++)
	{
		if((i==65) || (i==69) || (i==73) || (i==79) || (i==85))
		{
			printf("%c\t",i);
			
		}
    }
     
	 printf("\n\ncapital consonants : ");
	 for(i=65;i<=90;i++)
	 {
		if((i!=65) && (i!=69) && (i!=73) && (i!=79) && (i!=85))	  
		 
		{
				printf("%c",i);
			
		}
		
			
	 }
	    printf("\n\nsmall vowels : ");
	 	for(i=97;i<=122;i++)
	{
		if((i==97) || (i==101) || (i==105) || (i==111) || (i==117))
		{
			printf("%c\t",i);
			
		}
    }
     
	 printf("\n\nsmall consonants : ");
	 for(i=97;i<=122;i++)
	 {
		if((i!=97) && (i!=101) && (i!=105) && (i!=111) && (i!=117))	  
		 
		{
				printf("%c",i);
			
		}
		
			
	}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
}
