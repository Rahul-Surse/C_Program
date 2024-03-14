#include<stdio.h>
#include<string.h>
int main()
{
	int count=0;
	char str1[10], temp[10];
	printf("\n Enter the first string \n");
	gets(str1);
    for(int i=0;str1[i]!=0;i++)
    {
    	count++;
	}
	
	int mid=count/2;
	int end=count-1;
	for(int i=0;i<mid;i++)
	{
		temp[i]=str1[i];
		str1[i]=str1[end];
		str1[end]=temp[i];
		end--;
	}

    printf("%s",str1);
   

return 0;
}
