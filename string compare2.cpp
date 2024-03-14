#include<stdio.h>
#include<string.h>
int main()
{
	int flag=0;
	char str1[10], str2[10];
	printf("\n Enter the first string \n");
	gets(str1);
	printf("\n Enter the second string \n");
	gets(str2);
    for(int i=0;str1[i]!='\0';i++)
    {
    	if(str1[i]!=str2[i])
    	{
    	flag=1;
    	break;
        }
	}
    
    if(flag==0)
    {
    	printf("\n strings are equal \n");
	}
	else
	{
		printf("\n strings are not equal \n");
	}
return 0;
}
