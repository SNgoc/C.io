#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//Question 2 Array Product:
struct student {
	int id;
	char name[100];
	double mark;
};
void quest2() 
{
	int i,n;
	printf("Enter a size of array: ");
	scanf("%d",&n);
	struct student arrS[n];
	printf("\nEnter a date of student");
	for(i=0; i<n; i++)
	{
		printf("\nEnter information of Student[%d]",i);
		printf("\nEnter an id: ");
		scanf("%d",&arrS[i].id);
		printf("\nEnter a name: ");
		fflush(stdin);
		gets(arrS[i].name);
		printf("\nEnter a mark: ");
		scanf("%lf",&arrS[i].mark);
	}
	printf("\nDisplay student, which have mark in range (40-60):\n");
	for (i=0; i<n; i++)
	{
		if (arrS[i].mark >=40 && arrS[i].mark <= 60)
		{
			printf("ID: %d\n",arrS[i].id);
			printf("Name: %s\n",arrS[i].name);
			printf("Mark: %.2lf\n",arrS[i].mark);
		}
	}
	int checkID;
	printf("\nInput ID to check: ");
	scanf("%d",&checkID);
	for (i=0; i<n; i++)
	{
		if (checkID == arrS[i].id)
		{
			printf("ID: %d\n",arrS[i].id);
			printf("Name: %s\n",arrS[i].name);
			printf("Mark: %.2lf\n",arrS[i].mark);
			break;
		}
	}
	printf("The ID don't exist!!!\n");
}
