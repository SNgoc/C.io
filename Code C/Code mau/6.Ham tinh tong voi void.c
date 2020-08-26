//Ham tinh tong gia tri mang
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int arr[5];
	int total,i;
	void inputArray(int[]);
	int totalValue(int[]);
	printf("\nEnter a value: \n");
	inputArray(arr);
	total = totalValue(arr);
	printf("\nThe total of value of array is %d\n",total);
}
void inputArray(int arr[]) {
	int i;
	for (i = 0; i<5; i++) {
		printf("Enter a value arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
}
int totalValue(int arr[]) {
	int sum = 0;
	int i;
	for (i=0; i<5; i++) {
		sum += arr[i];
	}
	return sum;
}
