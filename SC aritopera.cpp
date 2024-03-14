
#include<stdio.h>
int main(){
	int a,b,choice;
	printf("1:Addition\n");
	printf("2:Multiplication\n");
	printf("3:Substraction\n");
	printf("4:division\n");
	printf("5:Modulation\n");

	printf("\nEnter your choice\n");
	scanf("%d",&choice);
	printf("\nEnter two values\n");
	scanf("%d %d",&a,&b);
	switch(choice){
		 case 1:
		     printf("Addition is %d\n",a+b);
		 break;
		 case 2:
		 	printf("Multiplication is %d\n",a*b);
		  break;
		 case 3:
		 	printf("Substraction is %d\n",a-b);
		break;
		case 4:
		 	printf("Division is %d\n",a/b);
		break;
		case 5:
		 	printf("modulation is %d\n",a%b);
		break;
		default:
			printf("wrong choice");
	}
}
