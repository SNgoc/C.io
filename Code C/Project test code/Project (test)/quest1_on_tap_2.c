#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Question 1. Write a program in C language, which accepts the following details of the students. 	
"	Name
"	Enrollment_No
"	Science_Mark
"	Math_Mark
"	English_Mark

The user should able to specify for how many students he/she wants to enter the details.
The Number should be less than 100. 
If the user enters a number greater than 100 or less than 1, the program must display the following message: number must be between 1 and 100. Press any key to continue...*/

void quest1() {
	struct student {
		char name[100];
		int enroll;
		double sci, math, eng;
	}arrS[100];
	int numS;
	printf("******Student Management Program******\n");
	while (1) {
		printf("Input number students: ");
		fflush(stdin);
		scanf("%d",&numS);
		if (numS<1 || numS>100) {
			printf("\nThe number of students must be between 1 and 100. Press any key to continue...\n");
		}
		else {
			break;
		}
	}
	printf("\nPlease enter students data:\n");
	int i;
	for (i=1; i<=numS; i++) {
		printf("\nStudent no %d: \n",i);
		printf("Name: ");
		fflush(stdin);
		gets(arrS[i].name);
		printf("Enrollment No: ");
		fflush(stdin);
		scanf("%d",&arrS[i].enroll);
		printf("Science Mark: ");
		fflush(stdin);
		scanf("%lf",&arrS[i].sci);
		printf("Math Mark: ");
		fflush(stdin);
		scanf("%lf",&arrS[i].math);
		printf("English Mark: ");
		fflush(stdin);
		scanf("%lf",&arrS[i].eng);
	}
	printf("\n*****Students Details*****\n");
	double averM;
	for (i=1; i<=numS; i++) {
		averM = (arrS[i].sci + arrS[i].math + arrS[i].eng)/3;
		printf("\nStudent no %d: \n",i);
		printf("\nName: %s",arrS[i].name);
		printf("\nEnrollment No: %d",arrS[i].enroll);
		printf("\nScience Mark: %.2lf",arrS[i].sci);
		printf("\nMath Mark: %.2lf",arrS[i].math);
		printf("\nEnglish Mark: %.2lf",arrS[i].eng);
		printf("\nAverage Mark: %.2lf",averM);
		printf("\n");
	}
}
