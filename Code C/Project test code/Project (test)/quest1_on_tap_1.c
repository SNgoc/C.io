#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Question 1. Write a C program, allows the user to enter 5 numbers into integer array. 
The program will display the numbers in array, which are divisible by 3.*/

void quest1() {
	int num,i;
	int arrNum[100];
	printf("Enter a size of array: ");
	scanf("%d",&num);
	for (i=0; i<num; i++)
	{
		printf("\nEnter an array[%d]: ",i);
		scanf("%d",&arrNum[i]);
	}
	printf("\nThe number are divisible for 3: ");
	for (i=0; i<num; i++)
	{
		if (arrNum[i] % 3 == 0) {
			printf("%d\t",arrNum[i]);
		}
	}
	printf("\n");
}
