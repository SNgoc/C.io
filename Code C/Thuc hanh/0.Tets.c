// Code mau pointer
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
	void quest1();
	void quest2();
	printf("****************************************************\n");
	printf("*    Selecting appropriate action:              *\n");
	printf("*    1. Question 1                              *\n");
	printf("*    2. Question 2                              *\n");
	printf("*    3. Quit program                            *\n");
	printf("****************************************************\n");
	printf("\n\n");
	while (1) {
		int cmd;
		printf ("\nEnter an Option: ");
		fflush(stdin);
		scanf("%d",&cmd);
		switch (cmd) {
			case 1:
				quest1();
				break;
			case 2: 
				quest2();
				break;
			case 3:
				printf("\nQuit!!!");
				exit(0);
			default:
				printf("Invalid!!!\n");
		}
	}	
}
void quest1() 
{
	int i,n;
	printf("Enter an integer number: ");
	scanf("%d",&n);
	printf("Cac uoc cua %d:\n",n);
	for (i=1; i<n; i++)
	{
		if (n%i == 0) // i la so bi chia, duoc n chia het
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}
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
}
