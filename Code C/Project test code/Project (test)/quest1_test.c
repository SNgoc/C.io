#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Requirement 1. Write a C program, allows the user to enter integer array. Then enter a number X satisfying condition 2 <= X <= 9. 
The program will display the numbers in array, which are divisible by X.*/

void quest1() {
	int num,i,x;
	int arr[100];
	printf("Enter a size of array: ");
	scanf("%d",&num);
	for (i=0; i<num; i++)
	{
		printf("\nEnter number: ",i);
		scanf("%d",&arr[i]);
	}
	while(1) {
		printf("\nEnter a number X (2 <= X <= 9): ");
		fflush(stdin);
		scanf("%d",&x);
		if (2<=x && x<=5) {
			break;
		}
		else {
			printf("\nTry again!!!");
		}
	}
	printf("\nThe numbers are divisible for %d: ",x);
	for (i=0; i<num; i++) {
		if(arr[i] % x == 0) {
			printf("%d\t",arr[i]);
		}
	}
	printf("\n");
}
