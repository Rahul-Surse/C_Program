#include<iostream>
#include<conio.h>

struct player
{
	int jno,pmatch,prun;
	char pname[2];
};

int main()
{
	struct player p[10]; 
	printf("%d",sizeof(p));
	printf("\n add player details");
	for(int i=0;i<2;i++)
	{
		printf("\nenter name of player :");
		scanf("%s",&p[i].pname);
		printf("\nenter jersy number :");
		scanf("%d",&p[i].jno);
		printf("\nenter played match :");
		scanf("%d",&p[i].pmatch);
		printf("\nenter runs of player :");
		scanf("%d",&p[i].prun);
	}
	
	printf("\njersey number\tplayed match\truns of player");
	for(int i=0;i<2;i++)
	{
//		printf("hii");
		printf("\n%d\t%d\t%d\n",p[i].jno,p[i].pmatch,p[i].prun);
	}
}


