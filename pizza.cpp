#include<stdio.h>
#include<math.h>

int main ()
{
	
	char ch;
	int qty=4;
	
	
	printf(" enter code:");
	scanf("%c",&ch);
	
	printf(" enter qty:");
	scanf("%d",&qty);
	
	int gst=0;
	int g=0;
	    ch=='p'?printf("with gst %d \n without gst %d" ,gst=g+((250*qty)*18)/100,g=(250*qty)):
		ch=='f'?printf("with gst %d \n without gst %d" ,gst=g+((80*qty)*18)/100,g=(80*qty)):
		ch=='t'?printf("with gst %d \n without gst %d" ,gst=g+((110*qty)*18)/100,g=(110*qty)):
		ch=='s'?printf("with gst %d \n without gst %d" ,gst=g+((25*qty)*18)/100,g=(25*qty)):
	    printf("no");
	
	
	
	
	
	
}
