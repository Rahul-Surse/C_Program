#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10], str2[10];
	printf("\n Enter the first string \n");
	gets(str1);
//	printf("\n Enter the second string \n");
//	gets(str2);
//    strupr(str1);
//    printf("%s",str1);
    for(int i=0;str1[i]!=0;i++)
    {
    	str1[i]=str1[i]-32;
	}
	printf("\n %s",str1);   

return 0;
}
