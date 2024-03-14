#include<stdio.h>
#include<math.h>

int main()
{
	float s1, s2, s3, s4, s5, tot, per;
	
	printf("Enter the marks of subjects");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	
	tot=s2+s2+s3+s4+s5;
	printf("total = %.2f",tot);
	
	per=(tot/500)*100;
	printf("per = %.2f",per);
	
	if (per>=90)
	{
	   printf("Grade A");
	
	
	}
	else if (per>=80)
    {
	
	 	printf("Grade B");  
    }
    
    else if (per>=70)
    {
	
	 	printf("Grade C");  
    }
    
	else if (per>=60)
    {
	
	 	printf("Grade D");  
    
	}
	
	else if (per>=50)
    {
	
	 	printf("Grade E");  
    }
    
	else  (per<50);
    
	{
	
	 	printf("Grade f");  
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
