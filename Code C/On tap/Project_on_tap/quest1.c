#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//Question 1 Fibonacci series (1,1,2,3,5….)
void quest1() {
	int fibo,a,b;
	a = 1;
	a = b;
	printf("Enter a num to print Fibonacci: ");
	scanf("%d",&fibo);
	fflush(stdin);
	printf("The Fibonacci series:\n");
	printf("%d\t%d\t",a,b);
	int sum,i;
	for (i=2; i <= fibo; i++) {
		sum = a+b;
		if (sum <= fibo) {
			printf("%d\t",sum);
			a = b;
			b = sum;
		}
	}
	printf("\nFinished\n\n");
}
