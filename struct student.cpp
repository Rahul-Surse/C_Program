#include<conio.h>
#include<string.h>
#include<stdio.h>

struct student
{
	int studid,studcontact;
	char studname[50],studmail[50];
	float studper;
};

int main()
{
	struct student s[5]; 
	int sum=0;
   
	for(int i=0;i<2;i++)
	{
		printf("\nenter id of student :");
		scanf("%d",&s[i].studid);
		printf("\nenter name of  :");
		scanf("%s",&s[i].studname);
		printf("\nenter student mail:");
		scanf("%s",&s[i].studmail);
		printf("\nenter student contact :");
		scanf("%d",&s[i].studcontact);
	    printf("\nenter student percentage :");
		scanf("%f",&s[i].studper);
	}
	
	printf("\n id \tname \tmail \tcontact \tpercentage");
	for(int i=0;i<2;i++)
	{
		
		printf("\n%d\t%s\t%s\t%d\t%f\n",s[i].studid,s[i].studname,s[i].studmail,s[i].studcontact,s[i].studper);
	}
	
	printf("\n the maximmum percentage student data is \n");
	
	
        if(s[0].studper>s[1].studper)
		 {   
		    printf("\n%d\t%s\t%s\t%d\t%f\n",s[0].studid,s[0].studname,s[0].studmail,s[0].studcontact,s[0].studper);
	      }
	   else
	   {
	   	printf("\n%d\t%s\t%s\t%d\t%f\n",s[1].studid,s[1].studname,s[1].studmail,s[1].studcontact,s[1].studper);
	   }
	
	
	
}
