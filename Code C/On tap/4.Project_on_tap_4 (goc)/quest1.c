#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//Question 1
void quest1() 
{
	int i,n;
	printf("Enter an integer number: ");
	scanf("%d",&n);
	printf("Cac uoc cua %d:\n",n);
	for (i=1; i<n; i++)
	{
		if (n%i == 0) // i la so bi chia, duoc n chia het
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}
