#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5]={10,20,30,40,50};
	int num=100,in=2,temp1,temp2;
	for(int i=0;i<4;i++)
	{
		temp1=a[i];
		printf("%d",&a);
		if(temp1<a[i+1])
		{
			temp1++;
			printf("%d\t",temp1);
		}
	}
	

}
