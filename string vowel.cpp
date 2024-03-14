#include<stdio.h>
int main()
{
	int i,count,count1;
	char name[10];
	printf("\n enetr name \n");
    gets(name);
	printf("\n my name is %s \n",name);
	count=0;
	count1=0;
	for(int i=0;name[i]!='\0';i++)
	{
		if((name[i]>='a')&&(name[i]<='z'))
		{

		if((name[i]=='a') || (name[i]=='e') || (name[i]=='i') || (name[i]=='o')||(name[i]=='u'))
		{
			count++;
		}
		else
		{
			count1++;
		}
	}
	}
   
   printf(" \nthe number of vowel =%d",count);
   printf(" \nthe number of vowel =%d",count1);
	
}
