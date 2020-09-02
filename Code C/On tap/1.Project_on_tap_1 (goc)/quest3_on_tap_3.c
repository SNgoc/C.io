#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/* Question 3. Write a program, allows the user to input an array of the integer numbers. 
- Print out this array  
- Count the even number in this array  
- Display the sum of even integers in this array */

void quest3()
{
	int num,i;
	int arrN[100];
	printf("Enter a size of array: ");
	scanf("%d",&num);
	for (i=0; i<num; i++) {
		printf("\nEnter a array[%d]: ",i);
		scanf("%d",&arrN[i]);
	}
	printf("\nOutput the array: ");
	for (i=0; i<num; i++) {
		printf("%d\t",arrN[i]);
	}
	int count,sum;
	count = 0; sum = 0;
	for (i=0; i<num; i++) {
		if (arrN[i] % 2 == 0) {
			count++;
			sum += arrN[i];
		}
	}
	printf("\nNumber of even intergers is %d",count);
	printf("\nThe sum of even number is %d",sum);
	printf("\n");
}
