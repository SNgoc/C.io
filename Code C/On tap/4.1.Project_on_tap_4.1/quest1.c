#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Question 1. Write a program, allows the user to input some integer numbers into the array, 
check whether the array contains all the odd numbers or not?*/
void quest1() 
{
	int arrN[100];
	int i,num;
	printf("Enter size of array: ");
	scanf("%d",&num);
	for (i=1; i<=num; i++) {
		printf("\nEnter an array[%d]: ",i);
		scanf("%d",&arrN[i]);
	}
	for (i=1; i<=num; i++) {
		if (arrN[i]%2 == 0) {
			printf("\nThe array not contains all the odd numbers!\n");
			return;
		}
	}
	printf("\nThe array contains all the odd numbers!\n");
}
