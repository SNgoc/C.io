#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Question 2. Write a program to check whether a number is the prime or not? 
Note: The prime is the natural number that is only divisible by 1 and itself.*/

void quest2() {
	int prime,i;
	printf("Enter a number: ");
	scanf("%d",&prime);
	if (prime < 2)
	{
		printf("\n%d is not prime",prime);
	}
	if (prime == 2)
	{
		printf("\n%d is prime",prime);
	}
	if (prime > 2)
	{
		for (i=2; i<prime; i++)
		{
			if (prime%i == 0) {
				printf("\n%d is not a prime\n",prime);
				return;
			}
		}
		printf("\n%d is a prime",prime);
	}
	
	printf("\n");
}
