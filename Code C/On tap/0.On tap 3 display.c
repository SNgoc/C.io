/*
Displayed screen as described below: 	(10 marks)
****************************************************
*   Selecting appropriate action:	            *
*	1. Question 1	                            *
*	2. Question 2	                            *
*	3. Quit program	                            *
****************************************************
When 1, 2 or 3 is pressed, appropriate tasks to be performed
Else, output the invalid message and display the menu again
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j;//i la doc, j la ngang
	//Cach 1:

	printf("****************************************************\n");
	printf("*    Selecting appropriate action:              *\n");
	printf("*    1. Question 1                              *\n");
	printf("*    2. Question 2                              *\n");
	printf("*    3. Quit program                            *\n");
	printf("****************************************************\n");

	printf("\n\n");

	//Cach 2:
	char m[] = {"Selecting appropriate action:"};
	char n[] = {"1. Question 1"};
	char o[] = {"2. Question 2"};
	char p[] = {"3. Quit program"};

	for (i=1; i<=6; i++){
		for (j=1; j<=55; j++){
			if (i == 1 || j == 1 || i == 6){
				printf("*");
			}
			else if (i == 2) {
				if (j == 6) {
					printf("%s",m);
				}
				else if (j==53-strlen(m)){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else if (i == 3) {
				if (j == 6) {
					printf("%s",n);
				}
				else if (j==53-strlen(n)){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else if (i == 4) {
				if (j == 6) {
					printf("%s",o);
				}
				else if (j==53-strlen(o)){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else if (i == 5) {
				if (j == 6) {
					printf("%s",p);
				}
				else if (j==53-strlen(p)){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
