#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/* Write a program in C language, which will receive 10 numbers from the user and 
display the received numbers in descending order. */

void quest4()
{
	//Ham de sap xep so theo thu tu giam dan
	int numD(int n, int arr[20])
	{
		int i,j,temp;
		for (i=0; i<n-1; i++) 
		{
			for (j=i+1; j<n; j++) 
			{
				if (arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	//Phan code:
	int num,i;
	int arrN[20];
	printf("Please enter n interger number: ");
	fflush(stdin);
	scanf("%d",&num);
	for (i=0; i<num; i++)
	{
		printf("\nNumber [%d]: ",i);
		scanf("%d",&arrN[i]);
	}
	numD(num,arrN);
	printf("\nThe entered numbers in descendind order:\n");
	for (i=0; i<num; i++)
	{
		printf("%d\t",arrN[i]);
	}
	printf("\n");
}
