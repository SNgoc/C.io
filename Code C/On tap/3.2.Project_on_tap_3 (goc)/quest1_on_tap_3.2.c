#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Question 1. Write a C program, allows the user to enter integer array. Then enter a number X satisfying condition 2 <= X <= 5. 
The program will display the numbers in array, which are divisible by X.*/

void quest1() {
	int n,i,x;
	int arrN[100];
	printf("Enter a size of array: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		printf("\nEnter an array[%d]: ",i);
		scanf("%d",&arrN[i]);
	}
	printf("\nEnter X : ");
	fflush(stdin);
	scanf("%d",&x);
	if (2<x && x<5) {
		break;
	}
	else {
		printf("again!!!");
	}
	printf("\nThe numbers in array divisible by %d: ",x);
	for (i=0; i<n; i++) {
		if(arrN[i] % x == 0) {
			printf("\t%d",arrN[i]);
		}
	}
}
