#include<stdio.h>
#include<math.h>


int main()
{
	
	float a,b,c,d,e,M;
	
	printf("oxygen level of ram",a);
	scanf("%f",&a);
	
	printf("oxygen level of shyam",b);
	scanf("%f",&b);
	
	printf("oxygen level of krish",c);
	scanf("%f",&c);
	
	printf("oxygen level of vipul",d);
	scanf("%f",&d);
	
    printf("oxygen level of naman",e);
	scanf("%f",&e);	
	
	(a>b && a>c && a>d && a>e) ? printf("maximum oygen level of ram=%f",a):
	
	(b>a && b>c && b>d && b>e) ? printf("maximum oygen level of shyam=%f",b):
		
	(c>c && c>b && c>d && c>e) ? printf("maximum oygen level of krish=%f",c):
	
    (d>a && d>b && d>c && d>e) ? printf("maximum oygen level of vipul=%f",d):
					
	(e>a && e>b && e>c && e>d) ? printf("maximum oygen level of naman=%f",e):printf("no one is greater");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
