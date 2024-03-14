#include<stdio.h>
#include<string.h>

struct Student
{
	int age;
	float totalmarks;
	char name[20];
};

int main()
{
	struct Student s1,s2;
	
	printf("\n Enter the first student details  \n");	
	printf("\n enter the name,age and total marks of the student \n");
	scanf("%s%d%f",&s1.name,&s1.age,&s1.totalmarks);
	
	printf("\n Enter the second student details  \n");	
	printf("\n enter the name,age and total marks of the student \n");
	scanf("%s%d%f",&s2.name,&s2.age,&s2.totalmarks);
	
	printf("\n dispaly the first student details  \n");	
	printf("\n name:%s \n age: %d \n total marks :%f",s1.name,s1.age,s1.totalmarks);
	
	printf("\n dispaly the first student details  \n");	
	printf("\n name:%s \n age: %d \n total marks :%f",s2.name,s2.age,s2.totalmarks);
	float averagemarks=(s1.totalmarks+s2.totalmarks)/2;
	
	printf("\n average of total marks: %f",averagemarks);
 return 0;
}

