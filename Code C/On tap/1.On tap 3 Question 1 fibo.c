/* 
Question 1 (30 marks): 
	Write a program to generate the Fibonacci series (1,1,2,3,5….)
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
	int fibo,a,b;
	a = 1;
	a = b;
	printf("Enter a num to print Fibonacci: ");
	scanf("%d",&fibo);
	fflush(stdin);
	printf("The Fibonacci series:\n");
	printf("%d\t%d\t",a,b);
	int sum,i;
	for (i=2; 1>0; i++) {
		sum = a+b;
		if (sum <= fibo) {
			printf("%d\t",sum);
			a = b;
			b = sum;
		}
		else {
			break;
		}
	}
	printf("\nFinished");
	
}
