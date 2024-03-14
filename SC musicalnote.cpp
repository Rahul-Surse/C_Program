#include<stdio.h>
#include<conio.h>

int main()
{
	char IN,WN;
	
    
     printf("'c': do\n");
     printf("'d': re\n");
     printf("'e': mi\n");
     printf("'f': fa\n");
     printf("'g': so\n");
     printf("'a': la\n");
     printf("'b': ti\n");
     printf("enter indian classical mussical note\n");
     scanf("%c",&IN);
     
	switch(IN)
	{
		case 'c':
		printf(" do ");
		break;
		 
		case 'd':
		printf(" re ");
		break;
		
		case 'e':
		printf(" mi ");
		break;
		
		case 'f':
		printf(" fa ");
		break;
		
		case 'g':
		printf(" so ");
		break;
		
		case 'a':
		printf(" la ");
		break;
		
		case 'b':
		printf(" ti ");
		break;
		
		default:
			printf(" invalide ");
	}
	    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
