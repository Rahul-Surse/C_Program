#include<stdio.h>
#include<math.h>
int main()
{
	int getpower(int,int);
	int base,index,result;
    printf("enter the base and index from keyboard");
    scanf("%d %d",&base,&index);
    result=getpower(base,index);
    printf("\npower is %d \n",result);
}

 int getpower(int base,int index)
 {
 	int p=1;
 	for(int i=1;i<=index;i++)
 	{
 		p=p*base;
	}
 	return p;
 }
   	


	
	
	
	
	
	
	

