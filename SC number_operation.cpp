#include<stdio.h>

int main()
{
	int a,b,c=0,choice;
	printf(" input a number\n");
	scanf("%d",&a);
	
	printf("1: count number\n");
	printf("2: reverse any digit\n");
	printf("3; calculate sum of digits\n");
	printf("enter your choice\n",b);
	scanf("%d",&choice);
	
		switch(choice)
        {
    	case 1:
    		while(a!=10)
    		{
    			a=a/10;
    			c++;
			}
			printf("number of digitd= %d",c);
    		break;
    	
    	case 2: 
    	    a=a%10;
    	    a=a/10;
    	    a=a%10;
    	    a=a/10;
    	    a=a%10;
    	    
    	    break;
    	default:
    		printf("wrong choice");
		}	
	
}
