#include<stdio.h>
#include<conio.h>
struct employee
{
  int empid,empcon,empsalary;
  char empname[20],empmail[20];	
};

int main()
{
		struct employee e[100];
		int choice,flag=0,i=0;
	do {
        // Display menu
        printf("Menu:\n");
        printf("1. add employee detail\n");
        printf("2. display all employ detail\n");
        printf("3. search employ by id then find or not\n");
        printf("4. Exit\n");

        // Get user input
      
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        
        // Process user choice
        
        switch (choice) {
            case 1:
            
                printf("\nenter the id,contact,salaray,name,mail of employe\n");
                scanf("%d\t%d\t%d\t%s\t%s\t",&e[i].empid,&e[i].empcon,&e[i].empsalary,&e[i].empname,&e[i].empmail);
  
                i++;
                break;
            case 2:
                if(i==0)
                {
                	printf("\n no data found\n");
				}else{
					for(int j=0;j<i;j++)
					{
						 printf("%d\t%d\t%d\t%s\t%s\t",e[j].empid,e[j].empcon,e[j].empsalary,e[j].empname,e[j].empmail);
					}
				}
                break;
            case 3:
            	int serid;
                printf("\n enter the id of employe\n");
                scanf("%d",&serid);
                for(int k=0;k<i;k++)
                {
                	if(serid==e[k].empid)
                	{
                	   flag=1;	
					}
				
				}
				if(flag==1)
				{
					printf("\n find \n");
				}else{
					printf("\n not found\n");
				}
                break;
            
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }

    } while (choice != 4);
	
	
	
	
	
}
