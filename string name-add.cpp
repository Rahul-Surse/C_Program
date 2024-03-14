#include<stdio.h>
#include<string.h>
int main()
{
	int rno;
	char name[20], add[50];
	printf("\n enter roll number \n");
	scanf("%d",&rno); 
	printf("\n enter name \n");
	gets(name); 
	printf("\n enter address \n");
	gets(add); 
	printf("\n my name is %s \n",name);
    
    
    printf(" rn0=%d\n name=%s\n add=%s\n",rno,name,add);
   
	
}
