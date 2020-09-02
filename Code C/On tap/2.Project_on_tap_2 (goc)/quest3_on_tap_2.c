#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/* Question 3. Write a C language program, which receives a number (1 <= number <= 10) from the user 
and displays the factorial of the number.
*/

void quest3()
{
	//Ham de quy tim giai thua
	int fact (int x)
	{
		if (x == 1) {
			return 1;
		}
		return x*fact(x-1);
	}
	
	int num;
	printf("****** Finding the Factorial of a number Program******");
	printf("\nEnter a number from 1 to 10: ");
	scanf("%d",&num);
	printf("\nThe factorial of %d is: %d",num,fact(num));
	printf("\n");
}
